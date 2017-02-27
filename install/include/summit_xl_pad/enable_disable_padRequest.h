// Generated by gencpp from file summit_xl_pad/enable_disable_padRequest.msg
// DO NOT EDIT!


#ifndef SUMMIT_XL_PAD_MESSAGE_ENABLE_DISABLE_PADREQUEST_H
#define SUMMIT_XL_PAD_MESSAGE_ENABLE_DISABLE_PADREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace summit_xl_pad
{
template <class ContainerAllocator>
struct enable_disable_padRequest_
{
  typedef enable_disable_padRequest_<ContainerAllocator> Type;

  enable_disable_padRequest_()
    : value(false)  {
    }
  enable_disable_padRequest_(const ContainerAllocator& _alloc)
    : value(false)  {
  (void)_alloc;
    }



   typedef uint8_t _value_type;
  _value_type value;




  typedef boost::shared_ptr< ::summit_xl_pad::enable_disable_padRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::summit_xl_pad::enable_disable_padRequest_<ContainerAllocator> const> ConstPtr;

}; // struct enable_disable_padRequest_

typedef ::summit_xl_pad::enable_disable_padRequest_<std::allocator<void> > enable_disable_padRequest;

typedef boost::shared_ptr< ::summit_xl_pad::enable_disable_padRequest > enable_disable_padRequestPtr;
typedef boost::shared_ptr< ::summit_xl_pad::enable_disable_padRequest const> enable_disable_padRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::summit_xl_pad::enable_disable_padRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::summit_xl_pad::enable_disable_padRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace summit_xl_pad

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'robotnik_msgs': ['/home/marcus/catkin_ws_WAM/src/summit_xl_sim/robotnik_msgs/msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::summit_xl_pad::enable_disable_padRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::summit_xl_pad::enable_disable_padRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::summit_xl_pad::enable_disable_padRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::summit_xl_pad::enable_disable_padRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::summit_xl_pad::enable_disable_padRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::summit_xl_pad::enable_disable_padRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::summit_xl_pad::enable_disable_padRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e431d687bf4b2c65fbd94b12ae0cb5d9";
  }

  static const char* value(const ::summit_xl_pad::enable_disable_padRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe431d687bf4b2c65ULL;
  static const uint64_t static_value2 = 0xfbd94b12ae0cb5d9ULL;
};

template<class ContainerAllocator>
struct DataType< ::summit_xl_pad::enable_disable_padRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "summit_xl_pad/enable_disable_padRequest";
  }

  static const char* value(const ::summit_xl_pad::enable_disable_padRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::summit_xl_pad::enable_disable_padRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool value\n\
";
  }

  static const char* value(const ::summit_xl_pad::enable_disable_padRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::summit_xl_pad::enable_disable_padRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct enable_disable_padRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::summit_xl_pad::enable_disable_padRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::summit_xl_pad::enable_disable_padRequest_<ContainerAllocator>& v)
  {
    s << indent << "value: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SUMMIT_XL_PAD_MESSAGE_ENABLE_DISABLE_PADREQUEST_H
