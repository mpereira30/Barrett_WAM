// Generated by gencpp from file wam_msgs/BHandSpreadPosResponse.msg
// DO NOT EDIT!


#ifndef WAM_MSGS_MESSAGE_BHANDSPREADPOSRESPONSE_H
#define WAM_MSGS_MESSAGE_BHANDSPREADPOSRESPONSE_H


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
struct BHandSpreadPosResponse_
{
  typedef BHandSpreadPosResponse_<ContainerAllocator> Type;

  BHandSpreadPosResponse_()
    {
    }
  BHandSpreadPosResponse_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }






  typedef boost::shared_ptr< ::wam_msgs::BHandSpreadPosResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::wam_msgs::BHandSpreadPosResponse_<ContainerAllocator> const> ConstPtr;

}; // struct BHandSpreadPosResponse_

typedef ::wam_msgs::BHandSpreadPosResponse_<std::allocator<void> > BHandSpreadPosResponse;

typedef boost::shared_ptr< ::wam_msgs::BHandSpreadPosResponse > BHandSpreadPosResponsePtr;
typedef boost::shared_ptr< ::wam_msgs::BHandSpreadPosResponse const> BHandSpreadPosResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::wam_msgs::BHandSpreadPosResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::wam_msgs::BHandSpreadPosResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::wam_msgs::BHandSpreadPosResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::wam_msgs::BHandSpreadPosResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wam_msgs::BHandSpreadPosResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wam_msgs::BHandSpreadPosResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wam_msgs::BHandSpreadPosResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wam_msgs::BHandSpreadPosResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::wam_msgs::BHandSpreadPosResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::wam_msgs::BHandSpreadPosResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::wam_msgs::BHandSpreadPosResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "wam_msgs/BHandSpreadPosResponse";
  }

  static const char* value(const ::wam_msgs::BHandSpreadPosResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::wam_msgs::BHandSpreadPosResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::wam_msgs::BHandSpreadPosResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::wam_msgs::BHandSpreadPosResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BHandSpreadPosResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::wam_msgs::BHandSpreadPosResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::wam_msgs::BHandSpreadPosResponse_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // WAM_MSGS_MESSAGE_BHANDSPREADPOSRESPONSE_H