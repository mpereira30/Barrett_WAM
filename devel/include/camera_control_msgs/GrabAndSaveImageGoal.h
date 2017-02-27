// Generated by gencpp from file camera_control_msgs/GrabAndSaveImageGoal.msg
// DO NOT EDIT!


#ifndef CAMERA_CONTROL_MSGS_MESSAGE_GRABANDSAVEIMAGEGOAL_H
#define CAMERA_CONTROL_MSGS_MESSAGE_GRABANDSAVEIMAGEGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace camera_control_msgs
{
template <class ContainerAllocator>
struct GrabAndSaveImageGoal_
{
  typedef GrabAndSaveImageGoal_<ContainerAllocator> Type;

  GrabAndSaveImageGoal_()
    : exposure_given(false)
    , exposure_time(0.0)
    , gain_given(false)
    , gain_value(0.0)
    , gamma_given(false)
    , gamma_value(0.0)
    , brightness_given(false)
    , brightness_value(0.0)
    , exposure_auto(false)
    , gain_auto(false)
    , img_storage_path_and_name()  {
    }
  GrabAndSaveImageGoal_(const ContainerAllocator& _alloc)
    : exposure_given(false)
    , exposure_time(0.0)
    , gain_given(false)
    , gain_value(0.0)
    , gamma_given(false)
    , gamma_value(0.0)
    , brightness_given(false)
    , brightness_value(0.0)
    , exposure_auto(false)
    , gain_auto(false)
    , img_storage_path_and_name(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _exposure_given_type;
  _exposure_given_type exposure_given;

   typedef float _exposure_time_type;
  _exposure_time_type exposure_time;

   typedef uint8_t _gain_given_type;
  _gain_given_type gain_given;

   typedef float _gain_value_type;
  _gain_value_type gain_value;

   typedef uint8_t _gamma_given_type;
  _gamma_given_type gamma_given;

   typedef float _gamma_value_type;
  _gamma_value_type gamma_value;

   typedef uint8_t _brightness_given_type;
  _brightness_given_type brightness_given;

   typedef float _brightness_value_type;
  _brightness_value_type brightness_value;

   typedef uint8_t _exposure_auto_type;
  _exposure_auto_type exposure_auto;

   typedef uint8_t _gain_auto_type;
  _gain_auto_type gain_auto;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _img_storage_path_and_name_type;
  _img_storage_path_and_name_type img_storage_path_and_name;




  typedef boost::shared_ptr< ::camera_control_msgs::GrabAndSaveImageGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::camera_control_msgs::GrabAndSaveImageGoal_<ContainerAllocator> const> ConstPtr;

}; // struct GrabAndSaveImageGoal_

typedef ::camera_control_msgs::GrabAndSaveImageGoal_<std::allocator<void> > GrabAndSaveImageGoal;

typedef boost::shared_ptr< ::camera_control_msgs::GrabAndSaveImageGoal > GrabAndSaveImageGoalPtr;
typedef boost::shared_ptr< ::camera_control_msgs::GrabAndSaveImageGoal const> GrabAndSaveImageGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::camera_control_msgs::GrabAndSaveImageGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::camera_control_msgs::GrabAndSaveImageGoal_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::camera_control_msgs::GrabAndSaveImageGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::camera_control_msgs::GrabAndSaveImageGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::camera_control_msgs::GrabAndSaveImageGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::camera_control_msgs::GrabAndSaveImageGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::camera_control_msgs::GrabAndSaveImageGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::camera_control_msgs::GrabAndSaveImageGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::camera_control_msgs::GrabAndSaveImageGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c66e7613728d45278cbdc7c5a89f6e08";
  }

  static const char* value(const ::camera_control_msgs::GrabAndSaveImageGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc66e7613728d4527ULL;
  static const uint64_t static_value2 = 0x8cbdc7c5a89f6e08ULL;
};

template<class ContainerAllocator>
struct DataType< ::camera_control_msgs::GrabAndSaveImageGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "camera_control_msgs/GrabAndSaveImageGoal";
  }

  static const char* value(const ::camera_control_msgs::GrabAndSaveImageGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::camera_control_msgs::GrabAndSaveImageGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# The 'GrabAndSaveImageAction' has a similar goal as the 'GrabImagesAction' in\n\
# case of only grabbing one image. It additionally contains a string describing\n\
# the full storage path of the image to be captured.\n\
# It wont provide the grabbed image via the result topic. Instead it only\n\
# returns a flag indicating the success.\n\
\n\
##########################################\n\
################## GOAL ##################\n\
##########################################\n\
\n\
# Flag which indicates if the exposure time is provided and hence should be\n\
# set before grabbing\n\
bool exposure_given\n\
\n\
# Only relevant, if exposure_given is true:\n\
# The target exposure time in microseconds. This values can be overriden from\n\
# the brightness search, in case that the flag exposure_fixed is not true.\n\
float32 exposure_time\n\
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
float32 gain_value\n\
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
float32 gamma_value\n\
\n\
# Flag which indicates if the brightness value is provided and hence should\n\
# be set before grabbing\n\
bool brightness_given\n\
\n\
# Only relevant, if brightness_given is true:\n\
# The average intensity value of the resulting image. It depends the exposure\n\
# time as well as the gain setting.\n\
float32 brightness_value\n\
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
# File path and image name (including file-extension) to store the grabbed\n\
# image\n\
string img_storage_path_and_name\n\
";
  }

  static const char* value(const ::camera_control_msgs::GrabAndSaveImageGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::camera_control_msgs::GrabAndSaveImageGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.exposure_given);
      stream.next(m.exposure_time);
      stream.next(m.gain_given);
      stream.next(m.gain_value);
      stream.next(m.gamma_given);
      stream.next(m.gamma_value);
      stream.next(m.brightness_given);
      stream.next(m.brightness_value);
      stream.next(m.exposure_auto);
      stream.next(m.gain_auto);
      stream.next(m.img_storage_path_and_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GrabAndSaveImageGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::camera_control_msgs::GrabAndSaveImageGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::camera_control_msgs::GrabAndSaveImageGoal_<ContainerAllocator>& v)
  {
    s << indent << "exposure_given: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.exposure_given);
    s << indent << "exposure_time: ";
    Printer<float>::stream(s, indent + "  ", v.exposure_time);
    s << indent << "gain_given: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gain_given);
    s << indent << "gain_value: ";
    Printer<float>::stream(s, indent + "  ", v.gain_value);
    s << indent << "gamma_given: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gamma_given);
    s << indent << "gamma_value: ";
    Printer<float>::stream(s, indent + "  ", v.gamma_value);
    s << indent << "brightness_given: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.brightness_given);
    s << indent << "brightness_value: ";
    Printer<float>::stream(s, indent + "  ", v.brightness_value);
    s << indent << "exposure_auto: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.exposure_auto);
    s << indent << "gain_auto: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.gain_auto);
    s << indent << "img_storage_path_and_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.img_storage_path_and_name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAMERA_CONTROL_MSGS_MESSAGE_GRABANDSAVEIMAGEGOAL_H
