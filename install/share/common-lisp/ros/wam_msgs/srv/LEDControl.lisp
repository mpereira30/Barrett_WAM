; Auto-generated. Do not edit!


(cl:in-package wam_msgs-srv)


;//! \htmlinclude LEDControl-request.msg.html

(cl:defclass <LEDControl-request> (roslisp-msg-protocol:ros-message)
  ((turn_on
    :reader turn_on
    :initarg :turn_on
    :type std_msgs-msg:Bool
    :initform (cl:make-instance 'std_msgs-msg:Bool)))
)

(cl:defclass LEDControl-request (<LEDControl-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LEDControl-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LEDControl-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name wam_msgs-srv:<LEDControl-request> is deprecated: use wam_msgs-srv:LEDControl-request instead.")))

(cl:ensure-generic-function 'turn_on-val :lambda-list '(m))
(cl:defmethod turn_on-val ((m <LEDControl-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wam_msgs-srv:turn_on-val is deprecated.  Use wam_msgs-srv:turn_on instead.")
  (turn_on m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LEDControl-request>) ostream)
  "Serializes a message object of type '<LEDControl-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'turn_on) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LEDControl-request>) istream)
  "Deserializes a message object of type '<LEDControl-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'turn_on) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LEDControl-request>)))
  "Returns string type for a service object of type '<LEDControl-request>"
  "wam_msgs/LEDControlRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LEDControl-request)))
  "Returns string type for a service object of type 'LEDControl-request"
  "wam_msgs/LEDControlRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LEDControl-request>)))
  "Returns md5sum for a message object of type '<LEDControl-request>"
  "e4cf4d84661c7dde87aee2c1b97ddf9d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LEDControl-request)))
  "Returns md5sum for a message object of type 'LEDControl-request"
  "e4cf4d84661c7dde87aee2c1b97ddf9d")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LEDControl-request>)))
  "Returns full string definition for message of type '<LEDControl-request>"
  (cl:format cl:nil "std_msgs/Bool turn_on~%~%================================================================================~%MSG: std_msgs/Bool~%bool data~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LEDControl-request)))
  "Returns full string definition for message of type 'LEDControl-request"
  (cl:format cl:nil "std_msgs/Bool turn_on~%~%================================================================================~%MSG: std_msgs/Bool~%bool data~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LEDControl-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'turn_on))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LEDControl-request>))
  "Converts a ROS message object to a list"
  (cl:list 'LEDControl-request
    (cl:cons ':turn_on (turn_on msg))
))
;//! \htmlinclude LEDControl-response.msg.html

(cl:defclass <LEDControl-response> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass LEDControl-response (<LEDControl-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LEDControl-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LEDControl-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name wam_msgs-srv:<LEDControl-response> is deprecated: use wam_msgs-srv:LEDControl-response instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LEDControl-response>) ostream)
  "Serializes a message object of type '<LEDControl-response>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LEDControl-response>) istream)
  "Deserializes a message object of type '<LEDControl-response>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LEDControl-response>)))
  "Returns string type for a service object of type '<LEDControl-response>"
  "wam_msgs/LEDControlResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LEDControl-response)))
  "Returns string type for a service object of type 'LEDControl-response"
  "wam_msgs/LEDControlResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LEDControl-response>)))
  "Returns md5sum for a message object of type '<LEDControl-response>"
  "e4cf4d84661c7dde87aee2c1b97ddf9d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LEDControl-response)))
  "Returns md5sum for a message object of type 'LEDControl-response"
  "e4cf4d84661c7dde87aee2c1b97ddf9d")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LEDControl-response>)))
  "Returns full string definition for message of type '<LEDControl-response>"
  (cl:format cl:nil "~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LEDControl-response)))
  "Returns full string definition for message of type 'LEDControl-response"
  (cl:format cl:nil "~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LEDControl-response>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LEDControl-response>))
  "Converts a ROS message object to a list"
  (cl:list 'LEDControl-response
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'LEDControl)))
  'LEDControl-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'LEDControl)))
  'LEDControl-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LEDControl)))
  "Returns string type for a service object of type '<LEDControl>"
  "wam_msgs/LEDControl")