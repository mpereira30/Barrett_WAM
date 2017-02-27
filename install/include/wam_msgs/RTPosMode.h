// Generated by gencpp from file wam_msgs/RTPosMode.msg
// DO NOT EDIT!


#ifndef WAM_MSGS_MESSAGE_RTPOSMODE_H
#define WAM_MSGS_MESSAGE_RTPOSMODE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace wam_msgs
{
template <class ContainerAllocator>
struct RTPosMode_
{
  typedef RTPosMode_<ContainerAllocator> Type;

  RTPosMode_()
    : mode(0)  {
    }
  RTPosMode_(const ContainerAllocator& _alloc)
    : mode(0)  {
  (void)_alloc;
    }



   typedef int32_t _mode_type;
  _mode_type mode;


    enum { JOINT_POSITION_CONTROL = 1 };
     enum { CARTESIAN_POSITION_CONTROL = 2 };
     enum { CARTESIAN_ORIENTATION_CONTROL = 3 };
     enum { CARTESIAN_POS_ORIENT_CONTROL = 4 };
     enum { GRAVITY_COMP = 5 };
 

  typedef boost::shared_ptr< ::wam_msgs::RTPosMode_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::wam_msgs::RTPosMode_<ContainerAllocator> const> ConstPtr;

}; // struct RTPosMode_

typedef ::wam_msgs::RTPosMode_<std::allocator<void> > RTPosMode;

typedef boost::shared_ptr< ::wam_msgs::RTPosMode > RTPosModePtr;
typedef boost::shared_ptr< ::wam_msgs::RTPosMode const> RTPosModeConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::wam_msgs::RTPosMode_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::wam_msgs::RTPosMode_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace wam_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'wam_msgs': ['/home/marcus/catkin_ws_WAM/src/wam_common/wam_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::wam_msgs::RTPosMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::wam_msgs::RTPosMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wam_msgs::RTPosMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wam_msgs::RTPosMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wam_msgs::RTPosMode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wam_msgs::RTPosMode_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::wam_msgs::RTPosMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "544ac2cd5fe41900994452785d7632ab";
  }

  static const char* value(const ::wam_msgs::RTPosMode_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x544ac2cd5fe41900ULL;
  static const uint64_t static_value2 = 0x994452785d7632abULL;
};

template<class ContainerAllocator>
struct DataType< ::wam_msgs::RTPosMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "wam_msgs/RTPosMode";
  }

  static const char* value(const ::wam_msgs::RTPosMode_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::wam_msgs::RTPosMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 mode\n\
\n\
int32 JOINT_POSITION_CONTROL = 1\n\
int32 CARTESIAN_POSITION_CONTROL = 2\n\
int32 CARTESIAN_ORIENTATION_CONTROL = 3\n\
int32 CARTESIAN_POS_ORIENT_CONTROL = 4\n\
int32 GRAVITY_COMP = 5\n\
\n\
";
  }

  static const char* value(const ::wam_msgs::RTPosMode_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::wam_msgs::RTPosMode_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RTPosMode_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::wam_msgs::RTPosMode_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::wam_msgs::RTPosMode_<ContainerAllocator>& v)
  {
    s << indent << "mode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WAM_MSGS_MESSAGE_RTPOSMODE_H