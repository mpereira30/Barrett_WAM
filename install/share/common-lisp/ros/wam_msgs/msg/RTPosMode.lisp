; Auto-generated. Do not edit!


(cl:in-package wam_msgs-msg)


;//! \htmlinclude RTPosMode.msg.html

(cl:defclass <RTPosMode> (roslisp-msg-protocol:ros-message)
  ((mode
    :reader mode
    :initarg :mode
    :type cl:integer
    :initform 0))
)

(cl:defclass RTPosMode (<RTPosMode>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <RTPosMode>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'RTPosMode)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name wam_msgs-msg:<RTPosMode> is deprecated: use wam_msgs-msg:RTPosMode instead.")))

(cl:ensure-generic-function 'mode-val :lambda-list '(m))
(cl:defmethod mode-val ((m <RTPosMode>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wam_msgs-msg:mode-val is deprecated.  Use wam_msgs-msg:mode instead.")
  (mode m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<RTPosMode>)))
    "Constants for message type '<RTPosMode>"
  '((:JOINT_POSITION_CONTROL . 1)
    (:CARTESIAN_POSITION_CONTROL . 2)
    (:CARTESIAN_ORIENTATION_CONTROL . 3)
    (:CARTESIAN_POS_ORIENT_CONTROL . 4)
    (:GRAVITY_COMP . 5))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'RTPosMode)))
    "Constants for message type 'RTPosMode"
  '((:JOINT_POSITION_CONTROL . 1)
    (:CARTESIAN_POSITION_CONTROL . 2)
    (:CARTESIAN_ORIENTATION_CONTROL . 3)
    (:CARTESIAN_POS_ORIENT_CONTROL . 4)
    (:GRAVITY_COMP . 5))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <RTPosMode>) ostream)
  "Serializes a message object of type '<RTPosMode>"
  (cl:let* ((signed (cl:slot-value msg 'mode)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <RTPosMode>) istream)
  "Deserializes a message object of type '<RTPosMode>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'mode) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<RTPosMode>)))
  "Returns string type for a message object of type '<RTPosMode>"
  "wam_msgs/RTPosMode")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'RTPosMode)))
  "Returns string type for a message object of type 'RTPosMode"
  "wam_msgs/RTPosMode")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<RTPosMode>)))
  "Returns md5sum for a message object of type '<RTPosMode>"
  "544ac2cd5fe41900994452785d7632ab")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'RTPosMode)))
  "Returns md5sum for a message object of type 'RTPosMode"
  "544ac2cd5fe41900994452785d7632ab")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<RTPosMode>)))
  "Returns full string definition for message of type '<RTPosMode>"
  (cl:format cl:nil "int32 mode~%~%int32 JOINT_POSITION_CONTROL = 1~%int32 CARTESIAN_POSITION_CONTROL = 2~%int32 CARTESIAN_ORIENTATION_CONTROL = 3~%int32 CARTESIAN_POS_ORIENT_CONTROL = 4~%int32 GRAVITY_COMP = 5~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'RTPosMode)))
  "Returns full string definition for message of type 'RTPosMode"
  (cl:format cl:nil "int32 mode~%~%int32 JOINT_POSITION_CONTROL = 1~%int32 CARTESIAN_POSITION_CONTROL = 2~%int32 CARTESIAN_ORIENTATION_CONTROL = 3~%int32 CARTESIAN_POS_ORIENT_CONTROL = 4~%int32 GRAVITY_COMP = 5~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <RTPosMode>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <RTPosMode>))
  "Converts a ROS message object to a list"
  (cl:list 'RTPosMode
    (cl:cons ':mode (mode msg))
))
