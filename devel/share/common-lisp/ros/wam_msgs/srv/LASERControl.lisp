; Auto-generated. Do not edit!


(cl:in-package wam_msgs-srv)


;//! \htmlinclude LASERControl-request.msg.html

(cl:defclass <LASERControl-request> (roslisp-msg-protocol:ros-message)
  ((turn_on
    :reader turn_on
    :initarg :turn_on
    :type std_msgs-msg:Bool
    :initform (cl:make-instance 'std_msgs-msg:Bool)))
)

(cl:defclass LASERControl-request (<LASERControl-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LASERControl-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LASERControl-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name wam_msgs-srv:<LASERControl-request> is deprecated: use wam_msgs-srv:LASERControl-request instead.")))

(cl:ensure-generic-function 'turn_on-val :lambda-list '(m))
(cl:defmethod turn_on-val ((m <LASERControl-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wam_msgs-srv:turn_on-val is deprecated.  Use wam_msgs-srv:turn_on instead.")
  (turn_on m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LASERControl-request>) ostream)
  "Serializes a message object of type '<LASERControl-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'turn_on) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LASERControl-request>) istream)
  "Deserializes a message object of type '<LASERControl-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'turn_on) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LASERControl-request>)))
  "Returns string type for a service object of type '<LASERControl-request>"
  "wam_msgs/LASERControlRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LASERControl-request)))
  "Returns string type for a service object of type 'LASERControl-request"
  "wam_msgs/LASERControlRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LASERControl-request>)))
  "Returns md5sum for a message object of type '<LASERControl-request>"
  "e4cf4d84661c7dde87aee2c1b97ddf9d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LASERControl-request)))
  "Returns md5sum for a message object of type 'LASERControl-request"
  "e4cf4d84661c7dde87aee2c1b97ddf9d")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LASERControl-request>)))
  "Returns full string definition for message of type '<LASERControl-request>"
  (cl:format cl:nil "std_msgs/Bool turn_on~%~%================================================================================~%MSG: std_msgs/Bool~%bool data~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LASERControl-request)))
  "Returns full string definition for message of type 'LASERControl-request"
  (cl:format cl:nil "std_msgs/Bool turn_on~%~%================================================================================~%MSG: std_msgs/Bool~%bool data~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LASERControl-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'turn_on))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LASERControl-request>))
  "Converts a ROS message object to a list"
  (cl:list 'LASERControl-request
    (cl:cons ':turn_on (turn_on msg))
))
;//! \htmlinclude LASERControl-response.msg.html

(cl:defclass <LASERControl-response> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass LASERControl-response (<LASERControl-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LASERControl-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LASERControl-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name wam_msgs-srv:<LASERControl-response> is deprecated: use wam_msgs-srv:LASERControl-response instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LASERControl-response>) ostream)
  "Serializes a message object of type '<LASERControl-response>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LASERControl-response>) istream)
  "Deserializes a message object of type '<LASERControl-response>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LASERControl-response>)))
  "Returns string type for a service object of type '<LASERControl-response>"
  "wam_msgs/LASERControlResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LASERControl-response)))
  "Returns string type for a service object of type 'LASERControl-response"
  "wam_msgs/LASERControlResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LASERControl-response>)))
  "Returns md5sum for a message object of type '<LASERControl-response>"
  "e4cf4d84661c7dde87aee2c1b97ddf9d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LASERControl-response)))
  "Returns md5sum for a message object of type 'LASERControl-response"
  "e4cf4d84661c7dde87aee2c1b97ddf9d")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LASERControl-response>)))
  "Returns full string definition for message of type '<LASERControl-response>"
  (cl:format cl:nil "~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LASERControl-response)))
  "Returns full string definition for message of type 'LASERControl-response"
  (cl:format cl:nil "~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LASERControl-response>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LASERControl-response>))
  "Converts a ROS message object to a list"
  (cl:list 'LASERControl-response
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'LASERControl)))
  'LASERControl-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'LASERControl)))
  'LASERControl-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LASERControl)))
  "Returns string type for a service object of type '<LASERControl>"
  "wam_msgs/LASERControl")