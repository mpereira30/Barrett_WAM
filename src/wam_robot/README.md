# wam_robot
Ros based wrapper for the libbarrett library - (Older one that was catkinized from rosbuild)

Pre-Requisites
--------------
Perform the bare bone installation of ros hydro on wam's internal PC by following the link below

http://wiki.ros.org/hydro/Installation/Ubuntu

Install tf package
```
sudo apt-get install ros-hydro-tf
```
Compile & Build
--------------
Create a catkin workspace and initialize it
```
mkdir -p ~/catkin_ws/src

cd ~/catkin_ws/src

catkin_init_workspace

cd ~/catkin_ws

catkin_make

source devel/setup.bash

cd src/

wstool_init

git clone https://github.com/BarrettTechnology/wam_robot.git

wstool merge wam_robot/wam_robot.rosinstall

wstool_update

cd ~/catkin_ws

catkin_make
```
