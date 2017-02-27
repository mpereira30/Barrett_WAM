#include <ros/ros.h>
#include <tf/transform_listener.h>
#include <sensor_msgs/Range.h>
#include <sensor_msgs/Image.h>
#include "tf_listen/tf_listen_mes.h"

class my_tf_listen
{   
    public:
    ros::NodeHandle node;
    tf::TransformListener listener;
    tf::StampedTransform transform;
    double current_position[3];
    double current_range;
    sensor_msgs::Image current_frame;
    
    void get_tf(void);
    void update_ir(const sensor_msgs::Range::ConstPtr&);
    void update_frame(sensor_msgs::Image);

    ros::Subscriber get_ir = node.subscribe <sensor_msgs::Range> ("/barrett/palm/ir/range", 1, &my_tf_listen::update_ir, this); 
    ros::Subscriber get_frame = node.subscribe <sensor_msgs::Image> ("/barrett/image_raw_rot", 1, &my_tf_listen::update_frame, this);

    ros::Publisher tf_pub = node.advertise <tf_listen::tf_listen_mes> ("tf_listen_topic", 1);

    tf_listen::tf_listen_mes my_mes;
};

void my_tf_listen::get_tf(void)
{
    try
    {
      listener.waitForTransform("/world", "/wam/bhand/bhand_grasp_link", ros::Time(0), ros::Duration(0.8));
      listener.lookupTransform("/world", "/wam/bhand/bhand_grasp_link", ros::Time(0), transform);
      current_position[0] = transform.getOrigin().x();
      current_position[1] = transform.getOrigin().y();
      current_position[2] = transform.getOrigin().z();

      my_mes.position[0] = current_position[0];
      my_mes.position[1] = current_position[1];
      my_mes.position[2] = current_position[2];
      my_mes.range = current_range;
      my_mes.frame = current_frame;
      tf_pub.publish(my_mes); 
    }
    catch (tf::TransformException ex)
    {
      ROS_ERROR("%s",ex.what());
      ros::Duration(1.0).sleep();
    }

}

void my_tf_listen::update_ir(const sensor_msgs::Range::ConstPtr& msg)
{
  current_range = msg->range;  
}

void my_tf_listen::update_frame(sensor_msgs::Image msg)
{
  current_frame = msg;  
}


int main(int argc, char** argv)
{
  
  ros::init(argc, argv, "tf_listen");
  my_tf_listen tf_obj;
  ros::Rate rate(20.0); // publish freq
  while (ros::ok())
  {
    tf_obj.get_tf();
    rate.sleep();
  }
  return 0;
};

