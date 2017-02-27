cmake_minimum_required(VERSION 2.8.3)
project(moveit_tests)

find_package(catkin REQUIRED COMPONENTS moveit_core roscpp moveit_ros_planning_interface tf std_msgs)

include_directories(SYSTEM ${Boost_INCLUDE_DIR} ${EIGEN3_INCLUDE_DIR})
include_directories(${catkin_INCLUDE_DIRS})
link_directories(${catkin_LIBRARY_DIRS})

catkin_package(CATKIN_DEPENDS moveit_core roscpp moveit_ros_planning_interface tf std_msgs interactive_markers DEPENDS EIGEN3)

add_executable(moveit_tests src/moveit_tests.cpp)
target_link_libraries(moveit_tests ${catkin_LIBRARIES} ${Boost_LIBRARIES} moveit_move_group_interface)

add_executable(plan_test src/plan_test.cpp)
target_link_libraries(plan_test ${catkin_LIBRARIES} ${Boost_LIBRARIES} moveit_move_group_interface)
