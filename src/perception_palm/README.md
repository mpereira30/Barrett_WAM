Perception Palm driver
======================
This is a ROS driver for Barrett's Perception Palm. The Perception Palm includes a LED, a Laser, two cameras and an IR Range finder. 
This library is a ROS wrapper written above the open source C/C++ library for Microchip's USB-to-SPI protocol coverter. It works under Linux. This has been tested under ROS Hydro (Ubuntu 12.04) and Indigo (Ubuntu 14.04).

Pre-Requisites
--------------

1. Install libudev and wstool.
```
sudo apt-get update
sudo apt-get install libudev-dev
sudo apt-get install python-wstool
```
    If installation of wstool fails, install it this way instead:
```
sudo apt-get install python-pip
sudo pip install -U wstool
```

2. Install ROS.
  - On Ubuntu 14.04, install [ROS Indigo](http://wiki.ros.org/indigo/Installation/Ubuntu).
  - On Ubuntu 12.04, install [ROS Hydro](http://wiki.ros.org/hydro/Installation/Ubuntu).

3. Install camera driver
  - On Ubuntu 14.04 with ROS Indigo:
```
sudo apt-get install ros-indigo-camera-umd
```
  - On Ubuntu 12.04 with ROS Hydro:
```
sudo apt-get install ros-hydro-camera-umd
```

Install and build
-----------------

1. If not already created, create a new catkin workspace as instructed [here](http://wiki.ros.org/catkin/Tutorials/create_a_workspace). Note: these instructions are for ROS Indigo. If using ROS Hydro, replace "indigo" with "hydro" in step 1.

2. Clone git repository.
```
cd ~/catkin_ws/src
git clone https://git.barrett.com/software/perception_palm.git
```

3. Build the perception palm package.
```
cd ~/catkin_ws/src
wstool init .
wstool merge perception_palm/perception_palm.rosinstall
wstool update
cd ~/catkin_ws
source devel/setup.bash
catkin_make
sudo -s
catkin_make install
exit
```

Set up cameras
--------------

1. **Connect the Perception Palm to the PC** before completing the following steps.

2. By default, only one camera is used. To use both cameras, edit the launch file.
```
gedit ~/catkin_ws/src/launch/perception_palm.launch
```
    Uncomment the stereo camera node and comment the monocular camera node to use both the cameras.

3. Load the correct camera module. For one camera
```
sudo rmmod uvcvideo
sudo modprobe uvcvideo
```
    or two cameras
```
sudo rmmod uvcvideo
sudo modprobe uvcvideo quirks=128
```

*Notes*

Two cameras can be used simultaneously at a maximum resolution of 320 x 240 and a single camera can be used at a maximum resolution of 1600 x 1200. For information on maximum camera resolutions, refer to the spec sheet.

The camera with the red filter is physically installed with 180 degrees shift. So, in this configuration the camera with red filter is rotated by 180 degrees. Make sure that the appropriate camera (left/right) is shifted while configuring based on the corresponding device ennumerations (/dev/video0 or /dev/video1). The necessary changes can be made in the launch/perception_palm.launch file.

Calibration
-----------

**IR Range finder**

The IR range finder needs to be calibrated for the first time before using it. It will work without calibration but it might not be accurate. Follow the instructions below to calibrate it. This step can be skipped if you do not want to use the IR or if the IR range finder is already calibrated.
```
cd ~/catkin_ws/src/perception_palm/include/MCP2210-Library
make
sudo ./dist/Debug/GNU-Linux-x86/ir_calibrate
```
Follow the onscreen instructions.

**Cameras**

Please refer to the ROS [Stereo](http://wiki.ros.org/camera_calibration/Tutorials/StereoCalibration)/[Monocular](http://wiki.ros.org/camera_calibration/Tutorials/MonocularCalibration) calibration package. This step is completely optional. The cameras would work even if this step is skipped.

Running the demo
----------------

1. Configure the cameras (every time you plug in the Perception Palm or reboot the computer). For one camera
```
sudo rmmod uvcvideo
sudo modprobe uvcvideo
```
    or two cameras
```
sudo rmmod uvcvideo
sudo modprobe uvcvideo quirks=128
```

2. Become the root user to access the drivers and run the demo.
```
sudo -s
source ~/catkin_ws/devel/setup.bash
roslaunch perception_palm perception_palm.launch
```

3. To quit, press Ctrl-C. Then type `exit` to return to a regular terminal.

*Troubleshooting*

If the camera node fails to start in step 2, make sure the configuration you chose in step 1 matches the configuration in the launch file. See the "Set up cameras" section for details.

Accessing the sensors
---------------------

While the demo is running you can access the sensors from a separate terminal.

**Viewing with rviz**

ROS has a visualization tool called `rviz` that allows you to view sensor data and video. It can be run by
```
rviz
```

**LED**

The LED can be turned off and on by calling the service barrett/palm/set_led_on.<br />
```	
rosservice call barrett/palm/set_led_on ['True']
rosservice call barrett/palm/set_led_on ['False']
```

**Laser**

The Laser can be turned off and on by calling the service barrett/palm/set_laser_on.<br />
```	
rosservice call barrett/palm/set_laser_on ['True']
rosservice call barrett/palm/set_laser_on ['False']
```

**IR Range finder**

The IR range finder publishes the range information as a sensor_msgs/Range message, at 1Hz to the topic barrett/palm/ir/range<br />
```
rostopic echo barrett/palm/ir/range
```

**Camera**

By default, the two camera feeds are published at the rate of 30 fps with a resolution of 320x240 px. They are published to the topics, barrett/palm/left/image_raw and barrett/palm/right/image_Raw.<br />
While using the monocular camera mode, the images are published at the rate of 30 fps with a resolution of 1600 x 1200 to the topic barrett/palm/image_raw.<br />

Networking
------------------

This is required if you use run the ROS nodes across multiple computers. The below instructions are to setup the perception palm on the XWAM and to control it from a remote host.

In the host computer, open a new terminal and ssh into the XWAM
```
ssh summit@*xwam's ip address*
```
Enter the XWAM's password and open the hosts file
```
sudo vi /etc/hosts
```
Add the IP address of the remote host machine to the list and name it
```
*remote host's ip address* *remote host's name*
```
Save and exit it. Set the XWAM to be the ROS MASTER
```
export ROS_MASTER_URI=http://*XWAM's ip address*:11311
```
Open a new terminal and edit the host file in the host machine as above
```
sudo vi /etc/hosts
```
In the host machine, name the IP address of the xwam
```
*xwam's ip address* summit
```
Save and exit it. Update the ROS_MASTER as the XWAM in the host machine
```
export ROS_MASTER_URI=http://*XWAM's ip address*:11311
```

P.S: The ROS_MASTER_URI variable would be active as long as the terminal is open. If the terminal is closed and restarted, the ROS_MASTER_URI needs to be updated.
For more information on ROS network configuration refer to [ROS documentation](http://wiki.ros.org/ROS/NetworkSetup).

Troubleshooting
---------------

Trying to restart the perception_palm package multiple times might fail with an error "Error setting SPI Parameters".
This can be solved by unplugging and plugging back the USB to the port.
