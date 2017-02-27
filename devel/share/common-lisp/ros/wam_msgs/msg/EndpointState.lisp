; Auto-generated. Do not edit!


(cl:in-package wam_msgs-msg)


;//! \htmlinclude EndpointState.msg.html

(cl:defclass <EndpointState> (roslisp-msg-protocol:ros-message)
  ((orientation
    :reader orientation
    :initarg :orientation
    :type geometry_msgs-msg:Quaternion
    :initform (cl:make-instance 'geometry_msgs-msg:Quaternion))
   (positions
    :reader positions
    :initarg :positions
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0))
   (velocities
    :reader velocities
    :initarg :velocities
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass EndpointState (<EndpointState>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <EndpointState>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'EndpointState)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name wam_msgs-msg:<EndpointState> is deprecated: use wam_msgs-msg:EndpointState instead.")))

(cl:ensure-generic-function 'orientation-val :lambda-list '(m))
(cl:defmethod orientation-val ((m <EndpointState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wam_msgs-msg:orientation-val is deprecated.  Use wam_msgs-msg:orientation instead.")
  (orientation m))

(cl:ensure-generic-function 'positions-val :lambda-list '(m))
(cl:defmethod positions-val ((m <EndpointState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wam_msgs-msg:positions-val is deprecated.  Use wam_msgs-msg:positions instead.")
  (positions m))

(cl:ensure-generic-function 'velocities-val :lambda-list '(m))
(cl:defmethod velocities-val ((m <EndpointState>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wam_msgs-msg:velocities-val is deprecated.  Use wam_msgs-msg:velocities instead.")
  (velocities m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <EndpointState>) ostream)
  "Serializes a message object of type '<EndpointState>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'orientation) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'positions))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'positions))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'velocities))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'velocities))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <EndpointState>) istream)
  "Deserializes a message object of type '<EndpointState>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'orientation) istream)
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'positions) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'positions)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'velocities) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'velocities)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<EndpointState>)))
  "Returns string type for a message object of type '<EndpointState>"
  "wam_msgs/EndpointState")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'EndpointState)))
  "Returns string type for a message object of type 'EndpointState"
  "wam_msgs/EndpointState")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<EndpointState>)))
  "Returns md5sum for a message object of type '<EndpointState>"
  "dea8022bec7d7e6aafa92af7cef945d4")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'EndpointState)))
  "Returns md5sum for a message object of type 'EndpointState"
  "dea8022bec7d7e6aafa92af7cef945d4")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<EndpointState>)))
  "Returns full string definition for message of type '<EndpointState>"
  (cl:format cl:nil "geometry_msgs/Quaternion  orientation~%float32[]          positions~%float32[]          velocities~%~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'EndpointState)))
  "Returns full string definition for message of type 'EndpointState"
  (cl:format cl:nil "geometry_msgs/Quaternion  orientation~%float32[]          positions~%float32[]          velocities~%~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <EndpointState>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'orientation))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'positions) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'velocities) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <EndpointState>))
  "Converts a ROS message object to a list"
  (cl:list 'EndpointState
    (cl:cons ':orientation (orientation msg))
    (cl:cons ':positions (positions msg))
    (cl:cons ':velocities (velocities msg))
))
