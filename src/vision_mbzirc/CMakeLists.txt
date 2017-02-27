cmake_minimum_required(VERSION 2.8.3)
project(vision_mbzirc)

add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  cv_bridge
  image_transport
  roscpp
  sensor_msgs
  std_msgs
)

find_package(OpenCV REQUIRED)
set(OpenCV_INCLUDE_DIRS, "${OpenCV_INSTALL_PATH}/usr/local/include;${OpenCV_INSTALL_PATH}/usr/include")
include_directories(include ${OpenCV_INCLUDE_DIRS})


catkin_package(
  CATKIN_DEPENDS cv_bridge image_transport roscpp sensor_msgs std_msgs
)
include_directories(
  SYSTEM
  ${catkin_INCLUDE_DIRS}
)

include_directories(include ${catkin_INCLUDE_DIRS})
add_executable(vision_mbzirc src/Mywidget.cpp)

target_link_libraries(vision_mbzirc ${catkin_LIBRARIES})
target_link_libraries(vision_mbzirc ${OpenCV_LIBRARIES})

