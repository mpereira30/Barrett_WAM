#include <ros/ros.h>
#include <geometry_msgs/Pose.h>

#include <moveit_msgs/PlanningScene.h>
#include <moveit_msgs/AttachedCollisionObject.h>
#include <moveit_msgs/GetStateValidity.h>
#include <moveit_msgs/DisplayRobotState.h>
#include <moveit_msgs/ApplyPlanningScene.h>

#include <moveit/robot_model_loader/robot_model_loader.h>
#include <moveit/robot_state/robot_state.h>
#include <moveit/robot_state/conversions.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "plan_test");
  ros::AsyncSpinner spinner(1);
  spinner.start();

  ros::NodeHandle node_handle;
  ros::Duration sleep_time(2.5);
  sleep_time.sleep();
  sleep_time.sleep();

  ros::Publisher planning_scene_diff_publisher = node_handle.advertise<moveit_msgs::PlanningScene>("/planning_scene", 1);
  while (planning_scene_diff_publisher.getNumSubscribers() < 1)
  {
    ros::WallDuration sleep_t(0.5);
    sleep_t.sleep();
  }

  // For box-1
  moveit_msgs::AttachedCollisionObject attached_object_1;
  attached_object_1.link_name = "world";
  attached_object_1.object.header.frame_id = "world";
  attached_object_1.object.id = "box-1";
  geometry_msgs::Pose pose;
  pose.orientation.w = 1.0;
  pose.position.x = 0.45;
  pose.position.y = 0;
  pose.position.z = -0.03;
  shape_msgs::SolidPrimitive primitive;
  primitive.type = primitive.BOX;
  primitive.dimensions.resize(3);
  primitive.dimensions[0] = 0.45;
  primitive.dimensions[1] = 0.35;
  primitive.dimensions[2] = 0.4;
  attached_object_1.object.primitives.push_back(primitive);
  attached_object_1.object.primitive_poses.push_back(pose);
  attached_object_1.object.operation = attached_object_1.object.ADD;
  ROS_INFO("Adding Box 1");

  // For box-2
  moveit_msgs::AttachedCollisionObject attached_object_2;
  attached_object_2.link_name = "world";
  attached_object_2.object.header.frame_id = "world";
  attached_object_2.object.id = "box-2";
  pose.position.x = -0.55;
  pose.position.y = 0;
  pose.position.z = 0.04;
  attached_object_2.object.primitives.push_back(primitive);
  attached_object_2.object.primitive_poses.push_back(pose);
  attached_object_2.object.operation = attached_object_2.object.ADD;
  ROS_INFO("Adding Box 2");

  // For box-3
  moveit_msgs::AttachedCollisionObject attached_object_3;
  attached_object_3.link_name = "world";
  attached_object_3.object.header.frame_id = "world";
  attached_object_3.object.id = "box-3";
  pose.position.x = -0.06;
  pose.position.y = -0.45;
  pose.position.z = -0.03;
  primitive.dimensions[0] = 0.35;
  primitive.dimensions[1] = 0.4;
  primitive.dimensions[2] = 0.4;
  attached_object_3.object.primitives.push_back(primitive);
  attached_object_3.object.primitive_poses.push_back(pose);
  attached_object_3.object.operation = attached_object_3.object.ADD;
  ROS_INFO("Adding Box 3");

  // For box-4
  moveit_msgs::AttachedCollisionObject attached_object_4;
  attached_object_4.link_name = "world";
  attached_object_4.object.header.frame_id = "world";
  attached_object_4.object.id = "box-4";
  pose.position.x = -0.06;
  pose.position.y = 0.45;
  pose.position.z = -0.03;
  primitive.dimensions[0] = 0.35;
  primitive.dimensions[1] = 0.4;
  primitive.dimensions[2] = 0.4;
  attached_object_4.object.primitives.push_back(primitive);
  attached_object_4.object.primitive_poses.push_back(pose);
  attached_object_4.object.operation = attached_object_4.object.ADD;
  ROS_INFO("Adding Box 4");

  // For box-5
  moveit_msgs::AttachedCollisionObject attached_object_5;
  attached_object_5.link_name = "world";
  attached_object_5.object.header.frame_id = "world";
  attached_object_5.object.id = "box-5";
  pose.position.x = 0.36;
  pose.position.y = -0.38;
  pose.position.z = -0.03;
  primitive.dimensions[0] = 0.45;
  primitive.dimensions[1] = 0.45;
  primitive.dimensions[2] = 0.45;
  attached_object_5.object.primitives.push_back(primitive);
  attached_object_5.object.primitive_poses.push_back(pose);
  attached_object_5.object.operation = attached_object_5.object.ADD;
  ROS_INFO("Adding Box 5");

  // For box-6
  moveit_msgs::AttachedCollisionObject attached_object_6;
  attached_object_6.link_name = "world";
  attached_object_6.object.header.frame_id = "world";
  attached_object_6.object.id = "box-6";
  pose.position.x = 0.36;
  pose.position.y = 0.38;
  pose.position.z = -0.03;
  primitive.dimensions[0] = 0.45;
  primitive.dimensions[1] = 0.45;
  primitive.dimensions[2] = 0.45;
  attached_object_6.object.primitives.push_back(primitive);
  attached_object_6.object.primitive_poses.push_back(pose);
  attached_object_6.object.operation = attached_object_6.object.ADD;
  ROS_INFO("Adding Box 6");

  // For box-7
  moveit_msgs::AttachedCollisionObject attached_object_7;
  attached_object_7.link_name = "world";
  attached_object_7.object.header.frame_id = "world";
  attached_object_7.object.id = "box-7";
  pose.position.x = -0.45;
  pose.position.y = 0.39;
  pose.position.z = 0.04;
  primitive.dimensions[0] = 0.45;
  primitive.dimensions[1] = 0.45;
  primitive.dimensions[2] = 0.45;
  attached_object_7.object.primitives.push_back(primitive);
  attached_object_7.object.primitive_poses.push_back(pose);
  attached_object_7.object.operation = attached_object_7.object.ADD;
  ROS_INFO("Adding Box 7");

  // For box-8
  moveit_msgs::AttachedCollisionObject attached_object_8;
  attached_object_8.link_name = "world";
  attached_object_8.object.header.frame_id = "world";
  attached_object_8.object.id = "box-8";
  pose.position.x = -0.45;
  pose.position.y = -0.39;
  pose.position.z = 0.04;
  primitive.dimensions[0] = 0.45;
  primitive.dimensions[1] = 0.45;
  primitive.dimensions[2] = 0.45;
  attached_object_8.object.primitives.push_back(primitive);
  attached_object_8.object.primitive_poses.push_back(pose);
  attached_object_8.object.operation = attached_object_8.object.ADD;
  ROS_INFO("Adding Box 8");

  // Add boxes to planning scene
  moveit_msgs::PlanningScene planning_scene;
  planning_scene.world.collision_objects.push_back(attached_object_1.object);
  planning_scene.world.collision_objects.push_back(attached_object_2.object);
  planning_scene.world.collision_objects.push_back(attached_object_3.object);
  planning_scene.world.collision_objects.push_back(attached_object_4.object);
  planning_scene.world.collision_objects.push_back(attached_object_5.object);
  planning_scene.world.collision_objects.push_back(attached_object_6.object);
  planning_scene.world.collision_objects.push_back(attached_object_7.object);
  planning_scene.world.collision_objects.push_back(attached_object_8.object);
  planning_scene.is_diff = true;
  planning_scene_diff_publisher.publish(planning_scene);
  sleep_time.sleep();

  // /* First, define the REMOVE object message*/
  // moveit_msgs::CollisionObject remove_object;
  // remove_object.id = "box";
  // remove_object.header.frame_id = "odom_combined";
  // remove_object.operation = remove_object.REMOVE;
  //
  // // Note how we make sure that the diff message contains no other
  // // attached objects or collisions objects by clearing those fields
  // // first.
  // /* Carry out the REMOVE + ATTACH operation */
  // ROS_INFO("Attaching the object to the right wrist and removing it from the world.");
  // planning_scene.world.collision_objects.clear();
  // planning_scene.world.collision_objects.push_back(remove_object);
  // planning_scene.robot_state.attached_collision_objects.push_back(attached_object);
  // planning_scene_diff_publisher.publish(planning_scene);

  while(ros::ok)
  {sleep_time.sleep();}
  return 0;
}
