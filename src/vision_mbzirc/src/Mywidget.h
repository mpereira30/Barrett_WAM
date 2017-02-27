#ifndef MYWIDGET_H
#define MYWIDGET_H

//#include <QWidget>
#include "openCV/highgui.h"

struct MyApplicationData;

class MyApplication : public QWidget
{
    Q_OBJECT

public:
    MyApplication(QWidget *parent = 0);
    ~MyApplication();

    void readFrame();
    void readVideo();

    void doMorphologicalOperations(cv::Mat frame);
    cv::Mat getWrench(cv::Mat frame, int desiredWrenchHeight);

    void opticalFlow(cv::Mat currFrame);


private:
    MyApplicationData* d;
};

#endif // MYWIDGET_H
