// Generated by gencpp from file wam_msgs/CartPosMove.msg
// DO NOT EDIT!


#ifndef WAM_MSGS_MESSAGE_CARTPOSMOVE_H
#define WAM_MSGS_MESSAGE_CARTPOSMOVE_H

#include <ros/service_traits.h>


#include <wam_msgs/CartPosMoveRequest.h>
#include <wam_msgs/CartPosMoveResponse.h>


namespace wam_msgs
{

struct CartPosMove
{

typedef CartPosMoveRequest Request;
typedef CartPosMoveResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct CartPosMove
} // namespace wam_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::wam_msgs::CartPosMove > {
  static const char* value()
  {
    return "993d3a0cca92114d34b338aeb1007ee4";
  }

  static const char* value(const ::wam_msgs::CartPosMove&) { return value(); }
};

template<>
struct DataType< ::wam_msgs::CartPosMove > {
  static const char* value()
  {
    return "wam_msgs/CartPosMove";
  }

  static const char* value(const ::wam_msgs::CartPosMove&) { return value(); }
};


// service_traits::MD5Sum< ::wam_msgs::CartPosMoveRequest> should match 
// service_traits::MD5Sum< ::wam_msgs::CartPosMove > 
template<>
struct MD5Sum< ::wam_msgs::CartPosMoveRequest>
{
  static const char* value()
  {
    return MD5Sum< ::wam_msgs::CartPosMove >::value();
  }
  static const char* value(const ::wam_msgs::CartPosMoveRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::wam_msgs::CartPosMoveRequest> should match 
// service_traits::DataType< ::wam_msgs::CartPosMove > 
template<>
struct DataType< ::wam_msgs::CartPosMoveRequest>
{
  static const char* value()
  {
    return DataType< ::wam_msgs::CartPosMove >::value();
  }
  static const char* value(const ::wam_msgs::CartPosMoveRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::wam_msgs::CartPosMoveResponse> should match 
// service_traits::MD5Sum< ::wam_msgs::CartPosMove > 
template<>
struct MD5Sum< ::wam_msgs::CartPosMoveResponse>
{
  static const char* value()
  {
    return MD5Sum< ::wam_msgs::CartPosMove >::value();
  }
  static const char* value(const ::wam_msgs::CartPosMoveResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::wam_msgs::CartPosMoveResponse> should match 
// service_traits::DataType< ::wam_msgs::CartPosMove > 
template<>
struct DataType< ::wam_msgs::CartPosMoveResponse>
{
  static const char* value()
  {
    return DataType< ::wam_msgs::CartPosMove >::value();
  }
  static const char* value(const ::wam_msgs::CartPosMoveResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // WAM_MSGS_MESSAGE_CARTPOSMOVE_H
