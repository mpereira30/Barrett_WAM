
#include "moveit/move_group_interface/move_group.h"
#include "moveit/planning_scene_interface/planning_scene_interface.h"

#include "moveit_msgs/DisplayRobotState.h"
#include "moveit_msgs/DisplayTrajectory.h"

#include "moveit_msgs/AttachedCollisionObject.h"
#include "moveit_msgs/CollisionObject.h"


int main(int argc, char **argv)
{
  ros::init(argc, argv, "move_group_interface_tutorial");
  ros::NodeHandle node_handle;  
  ros::AsyncSpinner spinner(1);
  spinner.start();


  /* This sleep is ONLY to allow Rviz to come up */
  //sleep(20.0);
  
  moveit::planning_interface::MoveGroup group("arm"); // Source: wam7 srdf xacro file 

  moveit::planning_interface::PlanningSceneInterface planning_scene_interface;  

  ros::Publisher display_publisher = node_handle.advertise<moveit_msgs::DisplayTrajectory>("/move_group/display_planned_path", 1, true);
  moveit_msgs::DisplayTrajectory display_trajectory;

  // Getting Basic Information
  ROS_INFO("Reference frame: %s", group.getPlanningFrame().c_str());
  ROS_INFO("Reference frame: %s", group.getEndEffectorLink().c_str());

  // Planning to a Pose goal
  geometry_msgs::Pose target_pose1;
  target_pose1.orientation.x = -7.0412e-05;
  target_pose1.orientation.y = -1.3145e-05;
  target_pose1.orientation.z = 1.0;
  target_pose1.orientation.w = -7.25886e-05;
  target_pose1.position.x = -0.0908;
  target_pose1.position.y = -0.1808;
  target_pose1.position.z = 1.8;
  group.setPoseTarget(target_pose1);

  moveit::planning_interface::MoveGroup::Plan my_plan;
  bool success = group.plan(my_plan);

  ROS_INFO("Visualizing plan 1 (pose goal) %s",success?"":"FAILED");    
  sleep(5.0);

  if (1)
  {
    ROS_INFO("Visualizing plan 1 (again)");    
    display_trajectory.trajectory_start = my_plan.start_state_;
    display_trajectory.trajectory.push_back(my_plan.trajectory_);
    display_publisher.publish(display_trajectory);
    /* Sleep to give Rviz time to visualize the plan. */
    sleep(5.0);
  }
  
  // Moving to a pose goal
  group.move();

  return 1;
}