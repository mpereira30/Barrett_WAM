// Generated by gencpp from file robotnik_msgs/set_analog_outputRequest.msg
// DO NOT EDIT!


#ifndef ROBOTNIK_MSGS_MESSAGE_SET_ANALOG_OUTPUTREQUEST_H
#define ROBOTNIK_MSGS_MESSAGE_SET_ANALOG_OUTPUTREQUEST_H


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
struct set_analog_outputRequest_
{
  typedef set_analog_outputRequest_<ContainerAllocator> Type;

  set_analog_outputRequest_()
    : output(0)
    , value(0.0)  {
    }
  set_analog_outputRequest_(const ContainerAllocator& _alloc)
    : output(0)
    , value(0.0)  {
  (void)_alloc;
    }



   typedef int8_t _output_type;
  _output_type output;

   typedef float _value_type;
  _value_type value;




  typedef boost::shared_ptr< ::robotnik_msgs::set_analog_outputRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotnik_msgs::set_analog_outputRequest_<ContainerAllocator> const> ConstPtr;

}; // struct set_analog_outputRequest_

typedef ::robotnik_msgs::set_analog_outputRequest_<std::allocator<void> > set_analog_outputRequest;

typedef boost::shared_ptr< ::robotnik_msgs::set_analog_outputRequest > set_analog_outputRequestPtr;
typedef boost::shared_ptr< ::robotnik_msgs::set_analog_outputRequest const> set_analog_outputRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotnik_msgs::set_analog_outputRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotnik_msgs::set_analog_outputRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::robotnik_msgs::set_analog_outputRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotnik_msgs::set_analog_outputRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::set_analog_outputRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotnik_msgs::set_analog_outputRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::set_analog_outputRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotnik_msgs::set_analog_outputRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotnik_msgs::set_analog_outputRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "23963a89f1eb75051be813e2ad92b196";
  }

  static const char* value(const ::robotnik_msgs::set_analog_outputRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x23963a89f1eb7505ULL;
  static const uint64_t static_value2 = 0x1be813e2ad92b196ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotnik_msgs::set_analog_outputRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotnik_msgs/set_analog_outputRequest";
  }

  static const char* value(const ::robotnik_msgs::set_analog_outputRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotnik_msgs::set_analog_outputRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 output\n\
float32 value\n\
";
  }

  static const char* value(const ::robotnik_msgs::set_analog_outputRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotnik_msgs::set_analog_outputRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct set_analog_outputRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotnik_msgs::set_analog_outputRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotnik_msgs::set_analog_outputRequest_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    Printer<int8_t>::stream(s, indent + "  ", v.output);
    s << indent << "value: ";
    Printer<float>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTNIK_MSGS_MESSAGE_SET_ANALOG_OUTPUTREQUEST_H
