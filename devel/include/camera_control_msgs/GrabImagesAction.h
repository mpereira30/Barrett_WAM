// Generated by gencpp from file camera_control_msgs/GrabImagesAction.msg
// DO NOT EDIT!


#ifndef CAMERA_CONTROL_MSGS_MESSAGE_GRABIMAGESACTION_H
#define CAMERA_CONTROL_MSGS_MESSAGE_GRABIMAGESACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <camera_control_msgs/GrabImagesActionGoal.h>
#include <camera_control_msgs/GrabImagesActionResult.h>
#include <camera_control_msgs/GrabImagesActionFeedback.h>

namespace camera_control_msgs
{
template <class ContainerAllocator>
struct GrabImagesAction_
{
  typedef GrabImagesAction_<ContainerAllocator> Type;

  GrabImagesAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  GrabImagesAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::camera_control_msgs::GrabImagesActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::camera_control_msgs::GrabImagesActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;




  typedef boost::shared_ptr< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> const> ConstPtr;

}; // struct GrabImagesAction_

typedef ::camera_control_msgs::GrabImagesAction_<std::allocator<void> > GrabImagesAction;

typedef boost::shared_ptr< ::camera_control_msgs::GrabImagesAction > GrabImagesActionPtr;
typedef boost::shared_ptr< ::camera_control_msgs::GrabImagesAction const> GrabImagesActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace camera_control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'camera_control_msgs': ['/home/marcus/catkin_ws_WAM/devel/share/camera_control_msgs/msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bb800b200cfebf3a0829529417896e4c";
  }

  static const char* value(const ::camera_control_msgs::GrabImagesAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbb800b200cfebf3aULL;
  static const uint64_t static_value2 = 0x0829529417896e4cULL;
};

template<class ContainerAllocator>
struct DataType< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "camera_control_msgs/GrabImagesAction";
  }

  static const char* value(const ::camera_control_msgs::GrabImagesAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
GrabImagesActionGoal action_goal\n\
GrabImagesActionResult action_result\n\
GrabImagesActionFeedback action_feedback\n\
\n\
================================================================================\n\
MSG: camera_control_msgs/GrabImagesActionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
GrabImagesGoal goal\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: camera_control_msgs/GrabImagesGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
##########################################\n\
################## GOAL ##################\n\
##########################################\n\
\n\
########################################## DEPRECATED !!!\n\
uint8 BRIGHTNESS = 1\n\
uint8 EXPOSURE = 2\n\
# select between desired mean brightness or exposure\n\
uint8 target_type\n\
# list of target exposures/brightness -> resulting 'images' list has same size\n\
float32[] target_values\n\
########################################## DEPRECATED !!!\n\
\n\
# Flag which indicates if the exposure times are provided and hence should be\n\
# set before grabbing\n\
bool exposure_given\n\
\n\
# Only relevant, if exposure_given is true:\n\
# The list of target exposure times in microseconds.\n\
# It is possible to grab only one image as well as several images with\n\
# different exposure times. This values can be overriden from the brightness\n\
# search, in case that the flag exposure_fixed is not true.\n\
float32[] exposure_times\n\
\n\
# Flag which indicates if the gain is provided and hence should be set before\n\
# grabbing\n\
bool gain_given\n\
\n\
# Only relevant, if gain_given is true:\n\
# The target gain in percent of the maximal value the camera supports.\n\
# For USB-Cameras, the gain is in dB, for GigE-Cameras it is given in so\n\
# called 'device specific units'. This value can be overriden from the\n\
# brightness search, in case that the gain_fixed flag is set to false.\n\
float32[] gain_values\n\
\n\
# Flag which indicates if the gamma value is provided and hence should be set\n\
# before grabbing\n\
bool gamma_given\n\
\n\
# Only relevant, if gain_given is true:\n\
# Gamma correction of pixel intensity.\n\
# Adjusts the brightness of the pixel values output by the camera's sensor\n\
# to account for a non-linearity in the human perception of brightness or\n\
# of the display system (such as CRT).\n\
float32[] gamma_values\n\
\n\
# Flag which indicates if the brightness values are provided and hence should\n\
# be set before grabbing\n\
bool brightness_given\n\
\n\
# Only relevant, if brightness_given is true:\n\
# The average intensity values of the images. It depends the exposure time\n\
# as well as the gain setting.\n\
float32[] brightness_values\n\
\n\
# Only relevant, if brightness_given is true:\n\
# If the camera should try reach the desired brightness, at least one of the\n\
# following flags MUST be set. If both are set, the interface will use the\n\
# profile that tries to keep the gain at minimum to reduce white noise.\n\
# 'exposure_auto' will adapt the exposure time to reach the brightness, wheras\n\
# 'gain_auto' does so by adapting the gain. If one of these flags is set to\n\
# false, the connected property will be kept fix.\n\
# In most of the cases trying to reach a target brightness only by varying the\n\
# gain and keeping the exposure time fix is not a good approach, because the\n\
# exposure range is many times higher than the gain range.\n\
bool exposure_auto\n\
bool gain_auto\n\
\n\
\n\
================================================================================\n\
MSG: camera_control_msgs/GrabImagesActionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
GrabImagesResult result\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: camera_control_msgs/GrabImagesResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
##########################################\n\
################# RESULT #################\n\
##########################################\n\
\n\
########################################## DEPRECATED !!!\n\
# target values can not always be reached\n\
float32[] reached_values\n\
########################################## DEPRECATED !!!\n\
\n\
# The resulting images with the inquired image intensity settings.\n\
# The size of the vector equals the size of the exposure_times or the\n\
# brightness_values-vector\n\
sensor_msgs/Image[] images\n\
\n\
# The reached values of the images e.g. the values that were set to the camera\n\
# before the grab\n\
float32[] reached_exposure_times\n\
\n\
float32[] reached_brightness_values\n\
\n\
float32[] reached_gain_values\n\
\n\
float32[] reached_gamma_values\n\
\n\
# Flag which indicates the success of the grabbing action\n\
# In case of failure, the images-vector contains only the images, that could be\n\
# grabbed before the failure occurred.\n\
bool success\n\
\n\
\n\
================================================================================\n\
MSG: sensor_msgs/Image\n\
# This message contains an uncompressed image\n\
# (0, 0) is at top-left corner of image\n\
#\n\
\n\
Header header        # Header timestamp should be acquisition time of image\n\
                     # Header frame_id should be optical frame of camera\n\
                     # origin of frame should be optical center of cameara\n\
                     # +x should point to the right in the image\n\
                     # +y should point down in the image\n\
                     # +z should point into to plane of the image\n\
                     # If the frame_id here and the frame_id of the CameraInfo\n\
                     # message associated with the image conflict\n\
                     # the behavior is undefined\n\
\n\
uint32 height         # image height, that is, number of rows\n\
uint32 width          # image width, that is, number of columns\n\
\n\
# The legal values for encoding are in file src/image_encodings.cpp\n\
# If you want to standardize a new string format, join\n\
# ros-users@lists.sourceforge.net and send an email proposing a new encoding.\n\
\n\
string encoding       # Encoding of pixels -- channel meaning, ordering, size\n\
                      # taken from the list of strings in include/sensor_msgs/image_encodings.h\n\
\n\
uint8 is_bigendian    # is this data bigendian?\n\
uint32 step           # Full row length in bytes\n\
uint8[] data          # actual matrix data, size is (step * rows)\n\
\n\
================================================================================\n\
MSG: camera_control_msgs/GrabImagesActionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
GrabImagesFeedback feedback\n\
\n\
================================================================================\n\
MSG: camera_control_msgs/GrabImagesFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
##########################################\n\
################ FEEDBACK ################\n\
##########################################\n\
# The number of images already taken\n\
int32 curr_nr_images_taken\n\
\n\
";
  }

  static const char* value(const ::camera_control_msgs::GrabImagesAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GrabImagesAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::camera_control_msgs::GrabImagesAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::camera_control_msgs::GrabImagesAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::camera_control_msgs::GrabImagesActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::camera_control_msgs::GrabImagesActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::camera_control_msgs::GrabImagesActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAMERA_CONTROL_MSGS_MESSAGE_GRABIMAGESACTION_H