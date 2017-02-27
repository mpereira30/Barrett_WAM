// Generated by gencpp from file robotnik_msgs/homeRequest.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_HOMEREQUEST_H
#define ROBOTNIK_MSGS_MESSAGE_HOMEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robotnik_msgs
{
template <class ContainerAllocator>
struct homeRequest_
{
  typedef homeRequest_<ContainerAllocator> Type;

  homeRequest_()
    : request(false)  {
    }
  homeRequest_(const ContainerAllocator& _alloc)
    : request(false)  {
  (void)_alloc;
    }



   typedef uint8_t _request_type;
  _request_type request;




  typedef boost::shared_ptr< ::robotnik_msgs::homeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_msgs::homeRequest_<ContainerAllocator> const> ConstPtr;

}; // struct homeRequest_

typedef ::robotnik_msgs::homeRequest_<std::allocator<void> > homeRequest;

typedef boost::shared_ptr< ::robotnik_msgs::homeRequest > homeRequestPtr;
typedef boost::shared_ptr< ::robotnik_msgs::homeRequest const> homeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_msgs::homeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_msgs::homeRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robotnik_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'robotnik_msgs': ['/home/marcus/catkin_ws_WAM/src/summit_xl_sim/robotnik_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::homeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::homeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::homeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::homeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::homeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::homeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_msgs::homeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6f7e5ad6ab0ddf42c5727a195315a470";
  }

  static const char* value(const ::robotnik_msgs::homeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6f7e5ad6ab0ddf42ULL;
  static const uint64_t static_value2 = 0xc5727a195315a470ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_msgs::homeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/homeRequest";
  }

  static const char* value(const ::robotnik_msgs::homeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_msgs::homeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
bool request\n\
";
  }

  static const char* value(const ::robotnik_msgs::homeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_msgs::homeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.request);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct homeRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_msgs::homeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_msgs::homeRequest_<ContainerAllocator>& v)
  {
    s << indent << "request: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.request);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_HOMEREQUEST_H
