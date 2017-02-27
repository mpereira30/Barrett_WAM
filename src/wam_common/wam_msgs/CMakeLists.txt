cmake_minimum_required(VERSION 2.8.3)
project(wam_msgs)

find_package(catkin REQUIRED COMPONENTS
  message_generation
  geometry_msgs
  sensor_msgs
  std_msgs
)

add_message_files(DIRECTORY msg FILES
  RTCartPos.msg
  RTCartVel.msg
  RTJointPos.msg
  RTJointVel.msg
  RTJointTq.msg
  RTOrtnPos.msg
  RTOrtnVel.msg
  RTPose.msg
  RTPosMode.msg
  EndpointState.msg
  RTJointTraj.msg
)

add_service_files(DIRECTORY srv FILES
  BHandFingerPos.srv
  BHandFingerVel.srv
  BHandGraspPos.srv
  BHandGraspVel.srv
  BHandSpreadPos.srv
  BHandSpreadVel.srv
  CartPosMove.srv
  GravityComp.srv
  Hold.srv
  JointMove.srv
  OrtnMove.srv
  PoseMove.srv
  LASERControl.srv
  LEDControl.srv
)

generate_messages(DEPENDENCIES
  geometry_msgs
  sensor_msgs
  std_msgs
)

catkin_package(CATKIN_DEPENDS 
  message_runtime
  geometry_msgs
  sensor_msgs
  std_msgs
)
