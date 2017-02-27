; Auto-generated. Do not edit!


(cl:in-package wam_msgs-msg)


;//! \htmlinclude RTJointTq.msg.html

(cl:defclass <RTJointTq> (roslisp-msg-protocol:ros-message)
  ((torques
    :reader torques
    :initarg :torques
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass RTJointTq (<RTJointTq>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <RTJointTq>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'RTJointTq)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name wam_msgs-msg:<RTJointTq> is deprecated: use wam_msgs-msg:RTJointTq instead.")))

(cl:ensure-generic-function 'torques-val :lambda-list '(m))
(cl:defmethod torques-val ((m <RTJointTq>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wam_msgs-msg:torques-val is deprecated.  Use wam_msgs-msg:torques instead.")
  (torques m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <RTJointTq>) ostream)
  "Serializes a message object of type '<RTJointTq>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'torques))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'torques))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <RTJointTq>) istream)
  "Deserializes a message object of type '<RTJointTq>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'torques) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'torques)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<RTJointTq>)))
  "Returns string type for a message object of type '<RTJointTq>"
  "wam_msgs/RTJointTq")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'RTJointTq)))
  "Returns string type for a message object of type 'RTJointTq"
  "wam_msgs/RTJointTq")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<RTJointTq>)))
  "Returns md5sum for a message object of type '<RTJointTq>"
  "eee8a087b75bc454bfb2231a0ca7e0f2")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'RTJointTq)))
  "Returns md5sum for a message object of type 'RTJointTq"
  "eee8a087b75bc454bfb2231a0ca7e0f2")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<RTJointTq>)))
  "Returns full string definition for message of type '<RTJointTq>"
  (cl:format cl:nil "float32[] torques~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'RTJointTq)))
  "Returns full string definition for message of type 'RTJointTq"
  (cl:format cl:nil "float32[] torques~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <RTJointTq>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'torques) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <RTJointTq>))
  "Converts a ROS message object to a list"
  (cl:list 'RTJointTq
    (cl:cons ':torques (torques msg))
))
