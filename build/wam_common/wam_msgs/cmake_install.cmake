# Install script for directory: /home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/home/marcus/catkin_ws_WAM/install")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/wam_msgs/msg" TYPE FILE FILES
    "/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/msg/RTCartPos.msg"
    "/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/msg/RTCartVel.msg"
    "/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/msg/RTJointPos.msg"
    "/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/msg/RTJointVel.msg"
    "/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/msg/RTJointTq.msg"
    "/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/msg/RTOrtnPos.msg"
    "/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/msg/RTOrtnVel.msg"
    "/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/msg/RTPose.msg"
    "/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/msg/RTPosMode.msg"
    "/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/msg/EndpointState.msg"
    "/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/msg/RTJointTraj.msg"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/wam_msgs/srv" TYPE FILE FILES
    "/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/srv/BHandFingerPos.srv"
    "/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/srv/BHandFingerVel.srv"
    "/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/srv/BHandGraspPos.srv"
    "/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/srv/BHandGraspVel.srv"
    "/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/srv/BHandSpreadPos.srv"
    "/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/srv/BHandSpreadVel.srv"
    "/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/srv/CartPosMove.srv"
    "/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/srv/GravityComp.srv"
    "/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/srv/Hold.srv"
    "/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/srv/JointMove.srv"
    "/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/srv/OrtnMove.srv"
    "/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/srv/PoseMove.srv"
    "/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/srv/LASERControl.srv"
    "/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/srv/LEDControl.srv"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/wam_msgs/cmake" TYPE FILE FILES "/home/marcus/catkin_ws_WAM/build/wam_common/wam_msgs/catkin_generated/installspace/wam_msgs-msg-paths.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/marcus/catkin_ws_WAM/devel/include/wam_msgs")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/marcus/catkin_ws_WAM/devel/share/common-lisp/ros/wam_msgs")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  execute_process(COMMAND "/usr/bin/python" -m compileall "/home/marcus/catkin_ws_WAM/devel/lib/python2.7/dist-packages/wam_msgs")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python2.7/dist-packages" TYPE DIRECTORY FILES "/home/marcus/catkin_ws_WAM/devel/lib/python2.7/dist-packages/wam_msgs")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/marcus/catkin_ws_WAM/build/wam_common/wam_msgs/catkin_generated/installspace/wam_msgs.pc")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/wam_msgs/cmake" TYPE FILE FILES "/home/marcus/catkin_ws_WAM/build/wam_common/wam_msgs/catkin_generated/installspace/wam_msgs-msg-extras.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/wam_msgs/cmake" TYPE FILE FILES
    "/home/marcus/catkin_ws_WAM/build/wam_common/wam_msgs/catkin_generated/installspace/wam_msgsConfig.cmake"
    "/home/marcus/catkin_ws_WAM/build/wam_common/wam_msgs/catkin_generated/installspace/wam_msgsConfig-version.cmake"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/wam_msgs" TYPE FILE FILES "/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/package.xml")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

