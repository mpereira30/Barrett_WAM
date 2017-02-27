
#include "moveit/move_group_interface/move_group.h"
#include "moveit/planning_scene_interface/planning_scene_interface.h"

#include "moveit_msgs/DisplayRobotState.h"
#include "moveit_msgs/DisplayTrajectory.h"

#include "moveit_msgs/AttachedCollisionObject.h"
#include "moveit_msgs/CollisionObject.h"

#include "ros/ros.h"
#include "geometry_msgs/PoseStamped.h"
#include "sensor_msgs/Joy.h"
#include "std_msgs/Float32.h"
#include "math.h"
#include <Eigen/Geometry>
#include <tf/transform_listener.h>

#define PI 3.14159265

void ik_callback(const geometry_msgs::Pose::ConstPtr& msg, moveit::planning_interface::MoveGroup& group, moveit_msgs::DisplayTrajectory& display_trajectory,  ros::Publisher& display_publisher)
{
  geometry_msgs::Pose target_pose1;
  target_pose1.orientation.x = msg->orientation.x;
  target_pose1.orientation.y = msg->orientation.y;
  target_pose1.orientation.z = msg->orientation.z;
  target_pose1.orientation.w = msg->orientation.w;
  target_pose1.position.x = msg->position.x;
  target_pose1.position.y = msg->position.y;
  target_pose1.position.z = msg->position.z;
  group.setPoseTarget(target_pose1);

  moveit::planning_interface::MoveGroup::Plan my_plan;
  bool success = group.plan(my_plan);

  ROS_INFO("Visualizing plan %s",success?"":"FAILED");

  if (success)
  {
    display_trajectory.trajectory_start = my_plan.start_state_;
    display_trajectory.trajectory.push_back(my_plan.trajectory_);
    display_publisher.publish(display_trajectory);
    group.move();
  }

}

void pos_delta_cb(const geometry_msgs::Point::ConstPtr& msg, moveit::planning_interface::MoveGroup& group, moveit_msgs::DisplayTrajectory& display_trajectory,  ros::Publisher& display_publisher)
{
  geometry_msgs::Pose target_pose1;
  geometry_msgs::PoseStamped cur_pose = group.getCurrentPose();

  target_pose1.orientation.x = cur_pose.pose.orientation.x;
  target_pose1.orientation.y = cur_pose.pose.orientation.y;
  target_pose1.orientation.z = cur_pose.pose.orientation.z;
  target_pose1.orientation.w = cur_pose.pose.orientation.w;
  target_pose1.position.x = msg->x + cur_pose.pose.position.x;
  target_pose1.position.y = msg->y + cur_pose.pose.position.y;
  target_pose1.position.z = msg->z + cur_pose.pose.position.z;

  group.setPoseTarget(target_pose1);

  moveit::planning_interface::MoveGroup::Plan my_plan;
  bool success = group.plan(my_plan);

  ROS_INFO("Visualizing plan %s",success?"":"FAILED");

  if (success)
  {
    display_trajectory.trajectory_start = my_plan.start_state_;
    display_trajectory.trajectory.push_back(my_plan.trajectory_);
    display_publisher.publish(display_trajectory);
    group.move();
  }

}

void stem_wrench_cb(const sensor_msgs::Joy::ConstPtr& joy_msg, moveit::planning_interface::MoveGroup& group, moveit_msgs::DisplayTrajectory& display_trajectory,  ros::Publisher& display_publisher)
{
  if (joy_msg->buttons[0]) // wrench_area_button is 0 (Button A)
  {
      geometry_msgs::Pose target_pose1;
      target_pose1.orientation.x = -0.50256;
      target_pose1.orientation.y = 0.48848;
      target_pose1.orientation.z = 0.51672;
      target_pose1.orientation.w = -0.49176;
      target_pose1.position.x = -0.4381;
      target_pose1.position.y = 0.24966;
      target_pose1.position.z = 0.30121;
      group.setPoseTarget(target_pose1);

      moveit::planning_interface::MoveGroup::Plan my_plan;
      bool success = group.plan(my_plan);

    ROS_INFO("Visualizing plan %s",success?"":"FAILED");

      if (success)
      {
        display_trajectory.trajectory_start = my_plan.start_state_;
        display_trajectory.trajectory.push_back(my_plan.trajectory_);
        display_publisher.publish(display_trajectory);
        group.move();
      }

  }
  else if (joy_msg->buttons[1]) // stem_area_button is 1 (Button B)
  {
      geometry_msgs::Pose target_pose1;
      target_pose1.orientation.x = 0.47906;
      target_pose1.orientation.y = -0.46502;
      target_pose1.orientation.z = -0.54668;
      target_pose1.orientation.w = 0.50537;
      target_pose1.position.x = -0.48671;
      target_pose1.position.y = -0.16425;
      target_pose1.position.z = 0.27638;
      group.setPoseTarget(target_pose1);
      moveit::planning_interface::MoveGroup::Plan my_plan;
      bool success = group.plan(my_plan);

      ROS_INFO("Visualizing plan %s",success?"":"FAILED");

      if (success)
      {
        display_trajectory.trajectory_start = my_plan.start_state_;
        display_trajectory.trajectory.push_back(my_plan.trajectory_);
        display_publisher.publish(display_trajectory);
        group.move();
      }
  }

}
void circ_traj(const std_msgs::Float32::ConstPtr& msg, moveit::planning_interface::MoveGroup& group, moveit_msgs::DisplayTrajectory& display_trajectory, ros::Publisher& display_publisher)
{
	std::vector<geometry_msgs::Pose> waypoints;
  geometry_msgs::PoseStamped first_point = group.getCurrentPose();
  geometry_msgs::Pose pts;
  pts.position.x = first_point.pose.position.x;
  pts.position.y = first_point.pose.position.y;
  pts.position.z = first_point.pose.position.z;
  pts.orientation.w = first_point.pose.orientation.w;
  pts.orientation.x = first_point.pose.orientation.x;
  pts.orientation.y = first_point.pose.orientation.y;
  pts.orientation.z = first_point.pose.orientation.z;
  float deg = 0.0;
  float r = msg->data;
  waypoints.push_back(pts);
  double center_y = pts.position.y + r;
  double center_z = pts.position.z;

  tf::TransformListener listener;
  tf::StampedTransform transform;

  // first generate a circular trajectory with fixed orientation
  while (deg < 2*PI)
  {
    deg += 0.01;
    pts.position.y = center_y - r*cos(deg);
    pts.position.z = center_z + r*sin(deg);
    waypoints.push_back(pts);
  }
  std::vector<int>::size_type num_points = waypoints.size();

  for(uint i=0; i<num_points; i++)
  {
    group.setPoseTarget(waypoints[i]);
    moveit::planning_interface::MoveGroup::Plan my_plan;
    bool success = group.plan(my_plan);
    if(success) {group.move();}
    try
    {
      listener.waitForTransform("/world", "/wam/bhand/bhand_grasp_link", ros::Time(0), ros::Duration(0.8));
      listener.lookupTransform("/world", "/wam/bhand/bhand_grasp_link", ros::Time(0), transform);
    }
    catch (tf::TransformException ex)
    {
      ROS_ERROR("%s",ex.what());
      ros::Duration(1.0).sleep();
    }


  }

  moveit_msgs::RobotTrajectory trajectory;
  double fraction = group.computeCartesianPath(waypoints,
                                             0.01,  // eef_step
                                             0.0,   // jump_threshold
                                             trajectory);
  ROS_INFO("Visualizing plan 4 (cartesian path) (%.2f%% acheived)", fraction * 100.0);
  moveit::planning_interface::MoveGroup::Plan my_plan;
  my_plan.trajectory_ = trajectory;
  //group.execute(my_plan);

}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "move_group_interface_tutorial");
  ros::NodeHandle node_handle;
  ros::AsyncSpinner spinner(1);
  spinner.start();

  moveit::planning_interface::MoveGroup group("arm"); // Source: wam7 srdf xacro file

  moveit::planning_interface::PlanningSceneInterface planning_scene_interface;

  ros::Publisher display_publisher = node_handle.advertise<moveit_msgs::DisplayTrajectory>("/move_group/display_planned_path", 1, true);
  moveit_msgs::DisplayTrajectory display_trajectory;

  ros::Subscriber ik_subscriber = node_handle.subscribe < geometry_msgs::Pose > ("final_pose_cmd", 1, boost::bind(ik_callback, _1,boost::ref(group), boost::ref(display_trajectory), boost::ref(display_publisher) ));

  ros::Subscriber pos_delta_subscriber = node_handle.subscribe < geometry_msgs::Point > ("pos_delta_cmd", 1, boost::bind(pos_delta_cb, _1,boost::ref(group), boost::ref(display_trajectory), boost::ref(display_publisher) ));

  ros::Subscriber joy_sub = node_handle.subscribe <sensor_msgs::Joy > ("joy", 1, boost::bind(stem_wrench_cb, _1,boost::ref(group), boost::ref(display_trajectory), boost::ref(display_publisher) ));

  ros::Subscriber cir_sub = node_handle.subscribe <std_msgs::Float32> ("circular_trajectory", 1, boost::bind(circ_traj, _1, boost::ref(group), boost::ref(display_trajectory), boost::ref(display_publisher) ) );

  // Getting Basic Information
  ROS_INFO("Reference frame: %s", group.getPlanningFrame().c_str());
  ROS_INFO("Reference frame: %s", group.getEndEffectorLink().c_str());

  ros::spin();

  return 0;
}
