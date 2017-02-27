// Generated by gencpp from file wam_msgs/CartPosMoveRequest.msg
// DO NOT EDIT!


#ifndef WAM_MSGS_MESSAGE_CARTPOSMOVEREQUEST_H
#define WAM_MSGS_MESSAGE_CARTPOSMOVEREQUEST_H


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
struct CartPosMoveRequest_
{
  typedef CartPosMoveRequest_<ContainerAllocator> Type;

  CartPosMoveRequest_()
    : position()  {
      position.assign(0.0);
  }
  CartPosMoveRequest_(const ContainerAllocator& _alloc)
    : position()  {
  (void)_alloc;
      position.assign(0.0);
  }



   typedef boost::array<float, 3>  _position_type;
  _position_type position;




  typedef boost::shared_ptr< ::wam_msgs::CartPosMoveRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::wam_msgs::CartPosMoveRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CartPosMoveRequest_

typedef ::wam_msgs::CartPosMoveRequest_<std::allocator<void> > CartPosMoveRequest;

typedef boost::shared_ptr< ::wam_msgs::CartPosMoveRequest > CartPosMoveRequestPtr;
typedef boost::shared_ptr< ::wam_msgs::CartPosMoveRequest const> CartPosMoveRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::wam_msgs::CartPosMoveRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::wam_msgs::CartPosMoveRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::wam_msgs::CartPosMoveRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::wam_msgs::CartPosMoveRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wam_msgs::CartPosMoveRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wam_msgs::CartPosMoveRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wam_msgs::CartPosMoveRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wam_msgs::CartPosMoveRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::wam_msgs::CartPosMoveRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "993d3a0cca92114d34b338aeb1007ee4";
  }

  static const char* value(const ::wam_msgs::CartPosMoveRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x993d3a0cca92114dULL;
  static const uint64_t static_value2 = 0x34b338aeb1007ee4ULL;
};

template<class ContainerAllocator>
struct DataType< ::wam_msgs::CartPosMoveRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "wam_msgs/CartPosMoveRequest";
  }

  static const char* value(const ::wam_msgs::CartPosMoveRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::wam_msgs::CartPosMoveRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[3] position\n\
";
  }

  static const char* value(const ::wam_msgs::CartPosMoveRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::wam_msgs::CartPosMoveRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.position);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CartPosMoveRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::wam_msgs::CartPosMoveRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::wam_msgs::CartPosMoveRequest_<ContainerAllocator>& v)
  {
    s << indent << "position[]" << std::endl;
    for (size_t i = 0; i < v.position.size(); ++i)
    {
      s << indent << "  position[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.position[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // WAM_MSGS_MESSAGE_CARTPOSMOVEREQUEST_H
