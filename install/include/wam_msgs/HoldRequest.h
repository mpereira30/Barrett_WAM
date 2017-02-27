// Generated by gencpp from file wam_msgs/HoldRequest.msg
// DO NOT EDIT!


#ifndef WAM_MSGS_MESSAGE_HOLDREQUEST_H
#define WAM_MSGS_MESSAGE_HOLDREQUEST_H


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
struct HoldRequest_
{
  typedef HoldRequest_<ContainerAllocator> Type;

  HoldRequest_()
    : hold(false)  {
    }
  HoldRequest_(const ContainerAllocator& _alloc)
    : hold(false)  {
  (void)_alloc;
    }



   typedef uint8_t _hold_type;
  _hold_type hold;




  typedef boost::shared_ptr< ::wam_msgs::HoldRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::wam_msgs::HoldRequest_<ContainerAllocator> const> ConstPtr;

}; // struct HoldRequest_

typedef ::wam_msgs::HoldRequest_<std::allocator<void> > HoldRequest;

typedef boost::shared_ptr< ::wam_msgs::HoldRequest > HoldRequestPtr;
typedef boost::shared_ptr< ::wam_msgs::HoldRequest const> HoldRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::wam_msgs::HoldRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::wam_msgs::HoldRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::wam_msgs::HoldRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::wam_msgs::HoldRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wam_msgs::HoldRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wam_msgs::HoldRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wam_msgs::HoldRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wam_msgs::HoldRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::wam_msgs::HoldRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "797a139a4299aebd587b00a7001c67f7";
  }

  static const char* value(const ::wam_msgs::HoldRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x797a139a4299aebdULL;
  static const uint64_t static_value2 = 0x587b00a7001c67f7ULL;
};

template<class ContainerAllocator>
struct DataType< ::wam_msgs::HoldRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "wam_msgs/HoldRequest";
  }

  static const char* value(const ::wam_msgs::HoldRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::wam_msgs::HoldRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool hold\n\
";
  }

  static const char* value(const ::wam_msgs::HoldRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::wam_msgs::HoldRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.hold);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HoldRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::wam_msgs::HoldRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::wam_msgs::HoldRequest_<ContainerAllocator>& v)
  {
    s << indent << "hold: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.hold);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WAM_MSGS_MESSAGE_HOLDREQUEST_H
