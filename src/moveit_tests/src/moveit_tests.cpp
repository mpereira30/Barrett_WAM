
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
#include "tf/transform_datatypes.h"
#include "trajectory_msgs/JointTrajectoryPoint.h"

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

  // std::vector<double> group_variable_values;
  // group.getCurrentState()->copyJointGroupPositions(group.getCurrentState()->getRobotModel()->getJointModelGroup(group.getName()), group_variable_values);
  // group_variable_values[0] = msg->position.x;
  // group_variable_values[1] = msg->position.y;
  // group_variable_values[2] = msg->position.z;
  // group_variable_values[3] = msg->orientation.x;
  // group_variable_values[4] = msg->orientation.y;
  // group_variable_values[5] = msg->orientation.z;
  // group_variable_values[6] = msg->orientation.w;
  // group.setJointValueTarget(group_variable_values);

  moveit::planning_interface::MoveGroup::Plan my_plan;
  bool success = group.plan(my_plan);

  ROS_INFO("Visualizing plan %s",success?"":"FAILED");

  if (success)
  {
    // display_trajectory.trajectory_start = my_plan.start_state_;
    // display_trajectory.trajectory.push_back(my_plan.trajectory_);
    // display_publisher.publish(display_trajectory);
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
    // display_trajectory.trajectory_start = my_plan.start_state_;
    // display_trajectory.trajectory.push_back(my_plan.trajectory_);
    // display_publisher.publish(display_trajectory);
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
        // display_trajectory.trajectory_start = my_plan.start_state_;
        // display_trajectory.trajectory.push_back(my_plan.trajectory_);
        // display_publisher.publish(display_trajectory);
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
        // display_trajectory.trajectory_start = my_plan.start_state_;
        // display_trajectory.trajectory.push_back(my_plan.trajectory_);
        // display_publisher.publish(display_trajectory);
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
  tf::StampedTransform transform1;

  // first generate a circular trajectory with fixed orientation
  while (deg < PI)
  {
    deg += 0.035;
    pts.position.y = center_y - r*cos(deg);
    pts.position.z = center_z + r*sin(deg);
    waypoints.push_back(pts);
  }
  std::vector<int>::size_type num_points = waypoints.size();

  // get the initial transform from wam/wrist_pitch_link to /wam/bhand/bhand_grasp_link
  // try
  // {
  //   // listener.waitForTransform("/wam/wrist_pitch_link", "/wam/bhand/bhand_grasp_link", ros::Time(0), ros::Duration(0.8));
  //   // listener.lookupTransform("/wam/wrist_pitch_link", "/wam/bhand/bhand_grasp_link", ros::Time(0), transform);
  //   listener.waitForTransform("/wam/wrist_pitch_link", "/wam/wrist_palm_link", ros::Time(0), ros::Duration(0.8));
  //   listener.lookupTransform("/wam/wrist_pitch_link", "/wam/wrist_palm_link", ros::Time(0), transform);
  //   listener.waitForTransform("/wam/wrist_palm_link", "/wam/bhand/bhand_grasp_link", ros::Time(0), ros::Duration(0.8));
  //   listener.lookupTransform("/wam/wrist_palm_link", "/wam/bhand/bhand_grasp_link", ros::Time(0), transform1);
  // }
  // catch (tf::TransformException ex)
  // {
  //   ROS_ERROR("%s",ex.what());
  //   ros::Duration(1.0).sleep();
  // }
  // tf::Quaternion q_pitch_to_palm(transform.getRotation());
  // tf::Quaternion q_palm_to_ee(transform.getRotation());
  //
  // for(uint i=1; i<num_points; i++)
  // {
  //   group.setPoseTarget(waypoints[i]);
  //   moveit::planning_interface::MoveGroup::Plan my_plan;
  //   bool success = group.plan(my_plan);
  //   if(success) {group.move();}
  //   try
  //   {
  //     listener.waitForTransform("/world", "/wam/wrist_pitch_link", ros::Time(0), ros::Duration(0.8));
  //     listener.lookupTransform("/world", "/wam/wrist_pitch_link", ros::Time(0), transform);
  //   }
  //   catch (tf::TransformException ex)
  //   {
  //     ROS_ERROR("%s",ex.what());
  //     ros::Duration(1.0).sleep();
  //   }
  //   tf::Quaternion temp(0,0,0,1); // unit quaternion
  //   temp *= transform.getRotation(); // first rotate from word to wrist_pitch_link
  //   temp *= q_pitch_to_palm; // now rotate from pitch_link to palm
  //   temp *= q_palm_to_ee; // now rotate from pam to ee
  //   waypoints[i].orientation.w = temp.getAngle();
  //   tf::Vector3 temp_axis(temp.getAxis());
  //   waypoints[i].orientation.x = temp_axis.getX();
  //   waypoints[i].orientation.y = temp_axis.getY();
  //   waypoints[i].orientation.z = temp_axis.getZ();
  //
  // }

  for(uint i=1; i<num_points; i++)
  {
    Eigen::Quaterniond q(waypoints[i-1].orientation.w, waypoints[i-1].orientation.x, waypoints[i-1].orientation.y, waypoints[i-1].orientation.z);
    Eigen::Vector3d v(-1, 0, 0);
    Eigen::Quaterniond p;
    p.w() = 0;
    p.vec() = v;
    Eigen::Quaterniond rotatedP = q * p * q.inverse();
    Eigen::Vector3d rotV = rotatedP.vec();
    Eigen::Quaterniond result(0.035, rotV[0], rotV[1], rotV[2]);
    //result.normalize();
    result = q * result;
    waypoints[i].orientation.w = result.w();
    waypoints[i].orientation.x = result.x();
    waypoints[i].orientation.y = result.y();
    waypoints[i].orientation.z = result.z();
    // //tf::Quaternion temp(0,0,1,0.035);
    //tf::Quaternion q_ee(waypoints[i-1].orientation.x, waypoints[i-1].orientation.y, waypoints[i-1].orientation.z, waypoints[i-1].orientation.w);
    //tf::Quaternion q_turn(1,0,0,0.035);
    //temp *= q_ee;
    //q_ee *= temp;
    //tf::Quaternion temp(waypoints[i].orientation.x, waypoints[i].orientation.y, waypoints[i].orientation.z, waypoints[i].orientation.w);
    //temp *= temp1;
    //waypoints[i].orientation.w = q_ee.getAngle();
    //tf::Vector3 temp_axis(q_ee.getAxis());
    //waypoints[i].orientation.x = temp_axis.getX();
    //waypoints[i].orientation.y = temp_axis.getY();
    //waypoints[i].orientation.z = temp_axis.getZ();
    //Eigen::Quaterniond q_ee(waypoints[i].orientation.w, waypoints[i].orientation.x, waypoints[i].orientation.y, waypoints[i].orientation.z);
    // Eigen::Matrix3d R_ee = q_ee.toRotationMatrix();
    // Eigen::Matrix3d R_stem = Eigen::Matrix3d::Identity();
    // R_stem(1,1) = cos(0.035);
    // R_stem(0,0) = cos(0.035);
    // R_stem(0,1) = sin(0.035);
    // R_stem(1,0) = -sin(0.035);
    // Eigen::Matrix3d R = R_stem * R_ee;
    // Eigen::Quaterniond result(R);
    // //Eigen::Quaterniond temp(0.035,-1,0,0);
    // // /Eigen::Quaterniond result = q_ee * temp;
    // //result.normalize();
    // waypoints[i].orientation.w = result.w();
    // waypoints[i].orientation.x = result.x();
    // waypoints[i].orientation.y = result.y();
    // waypoints[i].orientation.z = result.z();

}

  moveit_msgs::RobotTrajectory trajectory;
  double fraction = group.computeCartesianPath(waypoints,
                                             0.01,  // eef_step
                                             0.0,   // jump_threshold
                                             trajectory);
  ROS_INFO("Visualizing plan 4 (cartesian path) (%.2f%% acheived)", fraction * 100.0);
  // std::vector<trajectory_msgs::JointTrajectoryPoint>  jts_traj = trajectory.joint_trajectory.points;
  // std::vector<int>::size_type num_pts = jts_traj.size();
  // for(uint i=0; i<num_pts; i++)
  // {
  //   trajectory.joint_trajectory.points[i].positions[6] -= (0.035*i);
  // }
  moveit::planning_interface::MoveGroup::Plan my_plan;
  my_plan.trajectory_ = trajectory;
  group.execute(my_plan);

}

void palm_rot_cb(const std_msgs::Float32::ConstPtr& msg, moveit::planning_interface::MoveGroup& group, moveit_msgs::DisplayTrajectory& display_trajectory, ros::Publisher& display_publisher, ros::Publisher& joint7_pub)
{
  std::vector<double> group_variable_values;
  group.getCurrentState()->copyJointGroupPositions(group.getCurrentState()->getRobotModel()->getJointModelGroup(group.getName()), group_variable_values);
  group_variable_values[6] -= msg->data;
  if (group_variable_values[6] > 3.0)
  {
    group_variable_values[6] = 3.0;
  }
  else if(group_variable_values[6] < -3.0)
  {
    group_variable_values[6] = -3.0;
  }

  group.setJointValueTarget(group_variable_values);
  moveit::planning_interface::MoveGroup::Plan my_plan;
  bool success = group.plan(my_plan);

    if (success)
    {
      // display_trajectory.trajectory_start = my_plan.start_state_;
      // display_trajectory.trajectory.push_back(my_plan.trajectory_);
      // display_publisher.publish(display_trajectory);
      group.move();

      std_msgs::Float32 jnt_msg;
      jnt_msg.data = group_variable_values[6];
      joint7_pub.publish(jnt_msg);
      //ROS_INFO("Palm angle is now %f radians. Palm limits : [3.0,-3.0]",group_variable_values[6]);
    }

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

  ros::Publisher joint7_pub = node_handle.advertise<std_msgs::Float32>("joint_7_angle",1);
  ros::Subscriber palm_rot_sub = node_handle.subscribe <std_msgs::Float32> ("palm_rotate", 1, boost::bind(palm_rot_cb, _1, boost::ref(group), boost::ref(display_trajectory), boost::ref(display_publisher), boost::ref(joint7_pub) ) );

  // Getting Basic Information
  ROS_INFO("Reference frame: %s", group.getPlanningFrame().c_str());
  ROS_INFO("Reference frame: %s", group.getEndEffectorLink().c_str());

  // sleep(10.0);

  ros::spin();

  return 0;
}
