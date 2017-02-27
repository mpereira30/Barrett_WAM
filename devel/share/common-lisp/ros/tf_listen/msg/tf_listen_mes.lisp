; Auto-generated. Do not edit!


(cl:in-package tf_listen-msg)


;//! \htmlinclude tf_listen_mes.msg.html

(cl:defclass <tf_listen_mes> (roslisp-msg-protocol:ros-message)
  ((position
    :reader position
    :initarg :position
    :type (cl:vector cl:float)
   :initform (cl:make-array 3 :element-type 'cl:float :initial-element 0.0))
   (range
    :reader range
    :initarg :range
    :type cl:float
    :initform 0.0)
   (frame
    :reader frame
    :initarg :frame
    :type sensor_msgs-msg:Image
    :initform (cl:make-instance 'sensor_msgs-msg:Image)))
)

(cl:defclass tf_listen_mes (<tf_listen_mes>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <tf_listen_mes>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'tf_listen_mes)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name tf_listen-msg:<tf_listen_mes> is deprecated: use tf_listen-msg:tf_listen_mes instead.")))

(cl:ensure-generic-function 'position-val :lambda-list '(m))
(cl:defmethod position-val ((m <tf_listen_mes>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader tf_listen-msg:position-val is deprecated.  Use tf_listen-msg:position instead.")
  (position m))

(cl:ensure-generic-function 'range-val :lambda-list '(m))
(cl:defmethod range-val ((m <tf_listen_mes>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader tf_listen-msg:range-val is deprecated.  Use tf_listen-msg:range instead.")
  (range m))

(cl:ensure-generic-function 'frame-val :lambda-list '(m))
(cl:defmethod frame-val ((m <tf_listen_mes>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader tf_listen-msg:frame-val is deprecated.  Use tf_listen-msg:frame instead.")
  (frame m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <tf_listen_mes>) ostream)
  "Serializes a message object of type '<tf_listen_mes>"
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'position))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'range))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'frame) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <tf_listen_mes>) istream)
  "Deserializes a message object of type '<tf_listen_mes>"
  (cl:setf (cl:slot-value msg 'position) (cl:make-array 3))
  (cl:let ((vals (cl:slot-value msg 'position)))
    (cl:dotimes (i 3)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits)))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'range) (roslisp-utils:decode-single-float-bits bits)))
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'frame) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<tf_listen_mes>)))
  "Returns string type for a message object of type '<tf_listen_mes>"
  "tf_listen/tf_listen_mes")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'tf_listen_mes)))
  "Returns string type for a message object of type 'tf_listen_mes"
  "tf_listen/tf_listen_mes")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<tf_listen_mes>)))
  "Returns md5sum for a message object of type '<tf_listen_mes>"
  "a901d7f4fd98f5da78b1ed54da0312ac")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'tf_listen_mes)))
  "Returns md5sum for a message object of type 'tf_listen_mes"
  "a901d7f4fd98f5da78b1ed54da0312ac")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<tf_listen_mes>)))
  "Returns full string definition for message of type '<tf_listen_mes>"
  (cl:format cl:nil "float32[3] position~%float32 range~%sensor_msgs/Image frame~%~%================================================================================~%MSG: sensor_msgs/Image~%# This message contains an uncompressed image~%# (0, 0) is at top-left corner of image~%#~%~%Header header        # Header timestamp should be acquisition time of image~%                     # Header frame_id should be optical frame of camera~%                     # origin of frame should be optical center of cameara~%                     # +x should point to the right in the image~%                     # +y should point down in the image~%                     # +z should point into to plane of the image~%                     # If the frame_id here and the frame_id of the CameraInfo~%                     # message associated with the image conflict~%                     # the behavior is undefined~%~%uint32 height         # image height, that is, number of rows~%uint32 width          # image width, that is, number of columns~%~%# The legal values for encoding are in file src/image_encodings.cpp~%# If you want to standardize a new string format, join~%# ros-users@lists.sourceforge.net and send an email proposing a new encoding.~%~%string encoding       # Encoding of pixels -- channel meaning, ordering, size~%                      # taken from the list of strings in include/sensor_msgs/image_encodings.h~%~%uint8 is_bigendian    # is this data bigendian?~%uint32 step           # Full row length in bytes~%uint8[] data          # actual matrix data, size is (step * rows)~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'tf_listen_mes)))
  "Returns full string definition for message of type 'tf_listen_mes"
  (cl:format cl:nil "float32[3] position~%float32 range~%sensor_msgs/Image frame~%~%================================================================================~%MSG: sensor_msgs/Image~%# This message contains an uncompressed image~%# (0, 0) is at top-left corner of image~%#~%~%Header header        # Header timestamp should be acquisition time of image~%                     # Header frame_id should be optical frame of camera~%                     # origin of frame should be optical center of cameara~%                     # +x should point to the right in the image~%                     # +y should point down in the image~%                     # +z should point into to plane of the image~%                     # If the frame_id here and the frame_id of the CameraInfo~%                     # message associated with the image conflict~%                     # the behavior is undefined~%~%uint32 height         # image height, that is, number of rows~%uint32 width          # image width, that is, number of columns~%~%# The legal values for encoding are in file src/image_encodings.cpp~%# If you want to standardize a new string format, join~%# ros-users@lists.sourceforge.net and send an email proposing a new encoding.~%~%string encoding       # Encoding of pixels -- channel meaning, ordering, size~%                      # taken from the list of strings in include/sensor_msgs/image_encodings.h~%~%uint8 is_bigendian    # is this data bigendian?~%uint32 step           # Full row length in bytes~%uint8[] data          # actual matrix data, size is (step * rows)~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <tf_listen_mes>))
  (cl:+ 0
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'position) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     4
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'frame))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <tf_listen_mes>))
  "Converts a ROS message object to a list"
  (cl:list 'tf_listen_mes
    (cl:cons ':position (position msg))
    (cl:cons ':range (range msg))
    (cl:cons ':frame (frame msg))
))
