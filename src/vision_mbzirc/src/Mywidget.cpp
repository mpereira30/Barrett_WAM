#include "opencv2/core/core.hpp"
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc.hpp"
//#include "opencv2/video/tracking.hpp"

#include "iostream"
#include <ctime>

// ROS stuff:
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>


using namespace std;
using namespace cv;

class ImageConverter
{
  ros::NodeHandle nh_;
  image_transport::ImageTransport it_;
  image_transport::Subscriber image_sub_;
  image_transport::Publisher image_pub_;

public:
  ImageConverter(): it_(nh_)
  {
    image_sub_ = it_.subscribe("/barrett/image_raw_rot", 1, &ImageConverter::imageCb, this);
  }

  void doMorphologicalOperations(cv::Mat);
  Mat getWrench(cv::Mat, int);  
  void imageCb(const sensor_msgs::ImageConstPtr&);

};

void ImageConverter::imageCb(const sensor_msgs::ImageConstPtr& msg)
{
    cv_bridge::CvImagePtr cv_ptr;
    try
    {
      cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);
    }
    catch (cv_bridge::Exception& e)
    {
      ROS_ERROR("cv_bridge exception: %s", e.what());
      return;
    }

    //ROS_INFO("In CB now");

    this->doMorphologicalOperations(cv_ptr->image);

}

void ImageConverter::doMorphologicalOperations(cv::Mat frame)
{
	//ROS_INFO("In doMorphologicalOperations now");
    if(frame.empty())
        return;

    Mat grayImage;
    Mat dst;
    Mat image;
    cvtColor(frame, grayImage, CV_BGR2GRAY);
    if(!grayImage.data)
        return;

    Ptr<CLAHE> clahe = createCLAHE(4.0, Size(9, 9));
    clahe->apply(grayImage, dst);
    cvtColor(dst, image, CV_GRAY2BGR);

    Mat threshold;
    cv::threshold(dst, threshold, 210, 255, CV_THRESH_BINARY | CV_THRESH_OTSU);

    Mat contour = this->getWrench(threshold, 500);
    imshow("drawing", contour);
    cv::waitKey(30);
}

Mat ImageConverter::getWrench(cv::Mat frame, int desiredWrenchHeight)
{
	//ROS_INFO("In getWrench now");
    if(!frame.data)
        return cv::Mat();

    int epsilon = 10;

    std::vector<cv::Vec4i> hierarchy;
    std::vector<std::vector<cv::Point>> contours;
    cv::findContours(frame.clone(), contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);

    vector< vector<Point> > contours_poly( contours.size() );
    vector<Rect> boundRect( contours.size() );
    for( size_t i = 0; i < contours.size(); i++ )
    {
        approxPolyDP( Mat(contours[i]), contours_poly[i], 3, true );
        boundRect[i] = boundingRect( Mat(contours_poly[i]) );
    }

    Mat drawing = Mat::zeros(frame.size(), CV_8UC1);
    cvtColor(frame.clone(), drawing, CV_GRAY2BGR);
    std::sort(boundRect.begin(), boundRect.end(), [](const Rect &a, const Rect &b) 
    {
        return (a.height > b.height);
    }
    );

    if(contours.size() < 6)
    {
        // Move the arm a bit back
    }
    else
    {
        for( int i = 0; i< 6; i++ )
        {
            cv::Scalar trueColor = cv::Scalar(0, 255, 0);
            cv::Scalar falseColor = cv::Scalar(0, 0, 255);

            drawContours( drawing, contours, i, trueColor, 1, 8, hierarchy, 0, cv::Point() );
            string height = std::to_string(static_cast<unsigned long long>(boundRect[i].height));
            putText(drawing, height, boundRect[i].br(), CV_FONT_HERSHEY_PLAIN, 1.0, CV_RGB(0,0,250));

            if(abs(stoi(height) - desiredWrenchHeight) < epsilon)
            {
                rectangle( drawing, boundRect[i].tl(), boundRect[i].br(), trueColor, 2, 8, 0 );
                Point center = Point((boundRect[i].x + boundRect[i].width)/2, (boundRect[i].y + boundRect[i].height)/2);
            } else
                rectangle( drawing, boundRect[i].tl(), boundRect[i].br(), falseColor, 2, 8, 0 );
        }
    }
    return drawing;
}

int main(int argc, char** argv)
{
  ros::init(argc, argv, "vision_mbzirc");
  ImageConverter ic;
  ros::spin();
  return 0;
}