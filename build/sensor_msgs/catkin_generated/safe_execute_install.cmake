execute_process(COMMAND "/home/marcus/catkin_ws_WAM/build/sensor_msgs/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/marcus/catkin_ws_WAM/build/sensor_msgs/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
