cmake_minimum_required(VERSION 2.8.3)
project(tf_listen)

add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS std_msgs message_generation roscpp rospy tf sensor_msgs)

add_message_files(
  FILES
  tf_listen_mes.msg
)

generate_messages(
   DEPENDENCIES
   std_msgs  
   sensor_msgs
)

catkin_package(
  CATKIN_DEPENDS message_runtime std_msgs sensor_msgs roscpp tf
)

add_executable(tf_listen src/tf_listen.cpp)
target_link_libraries(tf_listen ${catkin_LIBRARIES})
add_dependencies(tf_listen ${PROJECT_NAME}_generate_messages_cpp)
