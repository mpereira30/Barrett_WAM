#include <math.h>
#include <ros/ros.h>

#include "geometry_msgs/Pose.h"
#include "sensor_msgs/Joy.h"
#include "std_srvs/Empty.h"
#include "std_msgs/Float32.h"

#define CART_FINE 0.002 // 2 mm
#define CART_COARSE 0.1 // 100 mm
#define ANGLE_FINE 0.01 // 0.01 rad = 0.57 deg
#define ANGLE_COARSE 0.525 // 0.525 rad = 30.08 deg

const int CNTRL_FREQ = 5; // Frequency at which we will publish our control messages.

//WamTeleop Class
class WamTeleop
{
public:
  ros::NodeHandle n_; // NodeHandles for publishing / subscribing on topics "/... & /wam/..." & "/bhand/..."

  // // Boolean statuses for commanded states
  bool cart_publish, ortn_publish;

  //variables to describe buttons on Joystick and their assignments
  int axis_x, axis_y, axis_z;
  int axis_r, axis_p, axis_yaw;
  int wrench_area_bttn, stem_area_bttn, ortn_btn;
  int move_x_bttn, delta_up, delta_down, coarse_buttn_up, coarse_buttn_down;

  //variables to describe velocity commands
  double cart_mag, ortn_mag;
  double req_xdir, req_ydir, req_zdir;
  double req_rdir, req_pdir, req_yawdir;

  //Subscribers
  ros::Subscriber joy_sub;

  //Publishers
  ros::Publisher pos_cmd_pub;
  geometry_msgs::Point cart_pos;
  ros::Publisher palm_rot_pub;
  std_msgs::Float32 palm_rot_msg;

  double delta_cart;
  double delta_angle;

  WamTeleop() {}

  void init();
  void joyCallback(const sensor_msgs::Joy::ConstPtr& joy_msg);
  void update();

  ~WamTeleop() {}
};

// WAM Teleoperation Initialization Function
void WamTeleop::init()
{
  n_.param("orientation_control_button", ortn_btn, 2); // Button X
  n_.param("wrench_area_button", wrench_area_bttn, 0); // Button A
  n_.param("stem_area_button", stem_area_bttn, 1); // Button B
  n_.param("move_x_direction_button", move_x_bttn, 3); // Button Y
  n_.param("increase_delta_button", delta_up, 4); // Button LB
  n_.param("decrease_delta_button", delta_down, 5); // Button RB
  n_.param("coarse_button_up", coarse_buttn_up, 6); // Back Button
  n_.param("coarse_button_down", coarse_buttn_down, 7); // Start Button

  //axes: [-0.0, -0.0, 1.0, -0.0, -0.0, 1.0, -0.0, -0.0]
  //		0		1	2	  3		4	  5		6	  7

  n_.param("cartesian_x_axis", axis_x, 7);
  n_.param("cartesian_y_axis", axis_y, 6);
  n_.param("cartesian_z_axis", axis_z, 7);

  //Subscribers
  joy_sub = n_.subscribe <sensor_msgs::Joy > ("joy", 1, &WamTeleop::joyCallback, this);

  //Publishers
  pos_cmd_pub = n_.advertise<geometry_msgs::Point>("pos_delta_cmd", 1);
  palm_rot_pub = n_.advertise<std_msgs::Float32>("/palm_rotate", 1);

  delta_cart = 0.0;
  delta_angle = 0.0;

  cart_publish = false;
  ortn_publish = false;
}

void WamTeleop::joyCallback(const sensor_msgs::Joy::ConstPtr& joy_msg)
{
  //--------------Cartesian Deltas----------------------------------------------
  if(joy_msg->buttons[delta_up] && !joy_msg->buttons[move_x_bttn])
  {
  		delta_cart = delta_cart + CART_FINE;
  }
  else if (joy_msg->buttons[delta_down] && !joy_msg->buttons[move_x_bttn])
  {
  		delta_cart = delta_cart - CART_FINE;
  		if (delta_cart <= 0.0)
  		{
  			delta_cart = 0.0;
  		}
  }
  else if (joy_msg->buttons[delta_up] && joy_msg->buttons[move_x_bttn])
  {
      delta_cart = delta_cart + CART_COARSE;
  }
  else if (joy_msg->buttons[delta_down] && joy_msg->buttons[move_x_bttn])
  {
  		delta_cart = delta_cart - CART_COARSE;
  		if (delta_cart <= 0.0)
  		{
  			delta_cart = 0.0;
  		}
  }
//------------------------------------------------------------------------------
  if(joy_msg->buttons[coarse_buttn_up] && !joy_msg->buttons[ortn_btn])
  {
      delta_angle = delta_angle + ANGLE_FINE;
  }
  else if (joy_msg->buttons[coarse_buttn_down] && !joy_msg->buttons[ortn_btn])
  {
      delta_angle = delta_angle - ANGLE_FINE;
      if (delta_angle <= 0.0)
      {
        delta_angle = 0.0;
      }
  }
  else if (joy_msg->buttons[coarse_buttn_up] && joy_msg->buttons[ortn_btn])
  {
      delta_angle = delta_angle + ANGLE_COARSE;
  }
  else if (joy_msg->buttons[coarse_buttn_down] && joy_msg->buttons[ortn_btn])
  {
      delta_angle = delta_angle - ANGLE_COARSE;
      if (delta_angle <= 0.0)
      {
        delta_angle = 0.0;
      }
  }

  ROS_INFO("Cartesian delta = %f",delta_cart);
  ROS_INFO("Angular delta = %f",delta_angle);

  //Cartesian position commands:
  if (joy_msg->buttons[move_x_bttn]) // If the move in x direction button is held
  {
  		if ((joy_msg->axes[axis_x] !=0) )
  		{
    		req_xdir = joy_msg->axes[axis_x]; // direction needs to be flipped to match the WAM's inertial frame
    		cart_publish = true;
  		}
  		else
    		req_xdir = 0.0;
  }
  else
  {
  		if ((joy_msg->axes[axis_z] !=0) )
  		{
    		req_zdir = joy_msg->axes[axis_z];
    		cart_publish = true;
  		}
  		else
    		req_zdir = 0.0;
  }

  if ((joy_msg->axes[axis_y] !=0) && !joy_msg->buttons[ortn_btn])
  {
    	req_ydir = joy_msg->axes[axis_y]; // direction needs to be flipped to match the WAM's inertial frame
    	cart_publish = true;
  }
  else
    	req_ydir = 0.0;


  if ((joy_msg->axes[axis_y] !=0) && joy_msg->buttons[ortn_btn])
  {
    	req_yawdir = joy_msg->axes[axis_y]; // direction needs to be flipped to match the WAM's inertial frame
    	ortn_publish = true;
  }
  else
    	req_yawdir = 0.0;

}

// Function for updating the commands and publishing
void WamTeleop::update()
{
    //Check our published cartesian velocity state and act accordingly
  if(cart_publish) // if only cart_publish state is set
  {
     cart_pos.x = delta_cart*req_xdir;
     cart_pos.y = delta_cart*req_ydir;
     cart_pos.z = delta_cart*req_zdir;

     pos_cmd_pub.publish(cart_pos);
     cart_publish = false;
  }

  if(ortn_publish)
  {
    palm_rot_msg.data = delta_angle * req_yawdir;
    palm_rot_pub.publish(palm_rot_msg);
    ortn_publish = false;
  }


}

int main(int argc, char** argv)
{
  ros::init(argc, argv, "wam_teleop"); // Start our wam_node and name it "wam_teleop"
  WamTeleop wam_teleop; // Declare a member of WamTeleop "wam_teleop"
  wam_teleop.init(); // Initialize our teleoperation

  ros::Rate pub_rate(CNTRL_FREQ); // Setting the publishing rate to CNTRL_FREQ (50Hz by default)

  while (wam_teleop.n_.ok()) // Looping at the specified frequency while our ros node is ok
  {
    ros::spinOnce();
    wam_teleop.update(); // Update and send commands to the WAM
    pub_rate.sleep();
  }
  return 0;
}
