; Auto-generated. Do not edit!


(cl:in-package camera_control_msgs-msg)


;//! \htmlinclude GrabHDRImageAction.msg.html

(cl:defclass <GrabHDRImageAction> (roslisp-msg-protocol:ros-message)
  ((action_goal
    :reader action_goal
    :initarg :action_goal
    :type camera_control_msgs-msg:GrabHDRImageActionGoal
    :initform (cl:make-instance 'camera_control_msgs-msg:GrabHDRImageActionGoal))
   (action_result
    :reader action_result
    :initarg :action_result
    :type camera_control_msgs-msg:GrabHDRImageActionResult
    :initform (cl:make-instance 'camera_control_msgs-msg:GrabHDRImageActionResult))
   (action_feedback
    :reader action_feedback
    :initarg :action_feedback
    :type camera_control_msgs-msg:GrabHDRImageActionFeedback
    :initform (cl:make-instance 'camera_control_msgs-msg:GrabHDRImageActionFeedback)))
)

(cl:defclass GrabHDRImageAction (<GrabHDRImageAction>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GrabHDRImageAction>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GrabHDRImageAction)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name camera_control_msgs-msg:<GrabHDRImageAction> is deprecated: use camera_control_msgs-msg:GrabHDRImageAction instead.")))

(cl:ensure-generic-function 'action_goal-val :lambda-list '(m))
(cl:defmethod action_goal-val ((m <GrabHDRImageAction>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader camera_control_msgs-msg:action_goal-val is deprecated.  Use camera_control_msgs-msg:action_goal instead.")
  (action_goal m))

(cl:ensure-generic-function 'action_result-val :lambda-list '(m))
(cl:defmethod action_result-val ((m <GrabHDRImageAction>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader camera_control_msgs-msg:action_result-val is deprecated.  Use camera_control_msgs-msg:action_result instead.")
  (action_result m))

(cl:ensure-generic-function 'action_feedback-val :lambda-list '(m))
(cl:defmethod action_feedback-val ((m <GrabHDRImageAction>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader camera_control_msgs-msg:action_feedback-val is deprecated.  Use camera_control_msgs-msg:action_feedback instead.")
  (action_feedback m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GrabHDRImageAction>) ostream)
  "Serializes a message object of type '<GrabHDRImageAction>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'action_goal) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'action_result) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'action_feedback) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GrabHDRImageAction>) istream)
  "Deserializes a message object of type '<GrabHDRImageAction>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'action_goal) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'action_result) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'action_feedback) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GrabHDRImageAction>)))
  "Returns string type for a message object of type '<GrabHDRImageAction>"
  "camera_control_msgs/GrabHDRImageAction")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GrabHDRImageAction)))
  "Returns string type for a message object of type 'GrabHDRImageAction"
  "camera_control_msgs/GrabHDRImageAction")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GrabHDRImageAction>)))
  "Returns md5sum for a message object of type '<GrabHDRImageAction>"
  "b532eec2f7786ab2956539c3134ede77")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GrabHDRImageAction)))
  "Returns md5sum for a message object of type 'GrabHDRImageAction"
  "b532eec2f7786ab2956539c3134ede77")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GrabHDRImageAction>)))
  "Returns full string definition for message of type '<GrabHDRImageAction>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%GrabHDRImageActionGoal action_goal~%GrabHDRImageActionResult action_result~%GrabHDRImageActionFeedback action_feedback~%~%================================================================================~%MSG: camera_control_msgs/GrabHDRImageActionGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalID goal_id~%GrabHDRImageGoal goal~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: actionlib_msgs/GoalID~%# The stamp should store the time at which this goal was requested.~%# It is used by an action server when it tries to preempt all~%# goals that were requested before a certain time~%time stamp~%~%# The id provides a way to associate feedback and~%# result message with specific goal requests. The id~%# specified must be unique.~%string id~%~%~%================================================================================~%MSG: camera_control_msgs/GrabHDRImageGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%##########################################~%################## GOAL ##################~%##########################################~%~%########################################## DEPRECATED !!!~%uint8 BRIGHTNESS = 1~%uint8 EXPOSURE = 2~%# select between desired mean brightness or exposure~%uint8 target_type~%# list of target exposures/brightness -> resulting 'images' list has same size~%float32[] target_values~%########################################## DEPRECATED !!!~%~%# Flag which indicates if the exposure times are provided and hence should be~%# set before grabbing~%bool exposure_given~%~%# The list of target exposure time in microseconds.~%# It is possible to grab only one image as well as several images with~%# different exposure times. This values can be overriden from the brightness~%# search, in case that the flag exposure_fixed is not true.~%# The interface will only try to set these values if the exposure_given flag is~%# set to true.~%float32[] exposure_times~%~%# If the exposure_fixed flag is set, the exposure time will stay fix in~%# case of a brightness search. Hence the target brightness will be reached~%# only by varying the gain~%bool exposure_fixed~%~%~%# Flag which indicates if the brightness values are provided and hence should~%# be set before grabbing~%bool brightness_given~%~%# The average intensity values of the images. It depends the exposure time~%# as well as the gain setting. The interface will only try to reach this~%# value if the brightness_given flag is set to true.~%float32[] brightness_values~%~%# The brightness_continuous flag controls the auto brightness function.~%# If it is set to false, the given brightness will only be reached once.~%# Hence changing light conditions lead to changing brightness values.~%# If it is set to true, the given brightness will be reached continuously,~%# trying to adapt to changing light conditions.~%bool brightness_continuous~%~%~%# Flag which indicates if the gain is provided and hence should be set before~%# grabbing~%bool gain_given~%~%# The target gain values in percent of the maximal value the camera supports~%# For USB-Cameras, the gain is in dB, for GigE-Cameras it is given in so~%# called 'device specific units'. This value can be overriden from the~%# brightness search, in case that the gain_fixed flag is set to false.~%# The interface will only try to reach this values if the gain_given flag is~%# set to true.~%float32[] gain_values~%~%# If the gain_fixed flag is set, the gain value will stay fix in~%# case of a brightness search. Hence the target brightness will be reached~%# only by varying the exposure~%bool gain_fixed~%~%# Flag which indicates if the gamma value is provided and hence should be set~%# before grabbing~%bool gamma_given~%~%# Gamma correction of pixel intensity.~%# Adjusts the brightness of the pixel values output by the camera's sensor~%# to account for a non-linearity in the human perception of brightness or~%# of the display system (such as CRT).~%# The interface will only try to reach this value if the gamma_given flag is~%# set to true.~%float32[] gamma_values~%~%~%================================================================================~%MSG: camera_control_msgs/GrabHDRImageActionResult~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalStatus status~%GrabHDRImageResult result~%~%================================================================================~%MSG: actionlib_msgs/GoalStatus~%GoalID goal_id~%uint8 status~%uint8 PENDING         = 0   # The goal has yet to be processed by the action server~%uint8 ACTIVE          = 1   # The goal is currently being processed by the action server~%uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing~%                            #   and has since completed its execution (Terminal State)~%uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)~%uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due~%                            #    to some failure (Terminal State)~%uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,~%                            #    because the goal was unattainable or invalid (Terminal State)~%uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing~%                            #    and has not yet completed execution~%uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,~%                            #    but the action server has not yet confirmed that the goal is canceled~%uint8 RECALLED        = 8   # The goal received a cancel request before it started executing~%                            #    and was successfully cancelled (Terminal State)~%uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be~%                            #    sent over the wire by an action server~%~%#Allow for the user to associate a string with GoalStatus for debugging~%string text~%~%~%================================================================================~%MSG: camera_control_msgs/GrabHDRImageResult~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%##########################################~%################# RESULT #################~%##########################################~%~%########################################## DEPRECATED !!!~%# target values can not always be reached~%float32[] reached_values~%########################################## DEPRECATED !!!~%~%# The resulting HDR image generated out of several images with the inquired~%# image intensity settings.~%sensor_msgs/Image hdr_image~%~%# The reached values of the images e.g. the values that were set to the camera~%# before the grab~%float32[] reached_exposure_times~%~%float32[] reached_brightness_values~%~%float32[] reached_gain_values~%~%float32[] reached_gamma_values~%~%# Flag which indicates the success of the grabbing action~%bool success~%~%~%================================================================================~%MSG: sensor_msgs/Image~%# This message contains an uncompressed image~%# (0, 0) is at top-left corner of image~%#~%~%Header header        # Header timestamp should be acquisition time of image~%                     # Header frame_id should be optical frame of camera~%                     # origin of frame should be optical center of cameara~%                     # +x should point to the right in the image~%                     # +y should point down in the image~%                     # +z should point into to plane of the image~%                     # If the frame_id here and the frame_id of the CameraInfo~%                     # message associated with the image conflict~%                     # the behavior is undefined~%~%uint32 height         # image height, that is, number of rows~%uint32 width          # image width, that is, number of columns~%~%# The legal values for encoding are in file src/image_encodings.cpp~%# If you want to standardize a new string format, join~%# ros-users@lists.sourceforge.net and send an email proposing a new encoding.~%~%string encoding       # Encoding of pixels -- channel meaning, ordering, size~%                      # taken from the list of strings in include/sensor_msgs/image_encodings.h~%~%uint8 is_bigendian    # is this data bigendian?~%uint32 step           # Full row length in bytes~%uint8[] data          # actual matrix data, size is (step * rows)~%~%================================================================================~%MSG: camera_control_msgs/GrabHDRImageActionFeedback~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalStatus status~%GrabHDRImageFeedback feedback~%~%================================================================================~%MSG: camera_control_msgs/GrabHDRImageFeedback~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%##########################################~%################ FEEDBACK ################~%##########################################~%int32 curr_nr_images_taken~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GrabHDRImageAction)))
  "Returns full string definition for message of type 'GrabHDRImageAction"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%GrabHDRImageActionGoal action_goal~%GrabHDRImageActionResult action_result~%GrabHDRImageActionFeedback action_feedback~%~%================================================================================~%MSG: camera_control_msgs/GrabHDRImageActionGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalID goal_id~%GrabHDRImageGoal goal~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: actionlib_msgs/GoalID~%# The stamp should store the time at which this goal was requested.~%# It is used by an action server when it tries to preempt all~%# goals that were requested before a certain time~%time stamp~%~%# The id provides a way to associate feedback and~%# result message with specific goal requests. The id~%# specified must be unique.~%string id~%~%~%================================================================================~%MSG: camera_control_msgs/GrabHDRImageGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%##########################################~%################## GOAL ##################~%##########################################~%~%########################################## DEPRECATED !!!~%uint8 BRIGHTNESS = 1~%uint8 EXPOSURE = 2~%# select between desired mean brightness or exposure~%uint8 target_type~%# list of target exposures/brightness -> resulting 'images' list has same size~%float32[] target_values~%########################################## DEPRECATED !!!~%~%# Flag which indicates if the exposure times are provided and hence should be~%# set before grabbing~%bool exposure_given~%~%# The list of target exposure time in microseconds.~%# It is possible to grab only one image as well as several images with~%# different exposure times. This values can be overriden from the brightness~%# search, in case that the flag exposure_fixed is not true.~%# The interface will only try to set these values if the exposure_given flag is~%# set to true.~%float32[] exposure_times~%~%# If the exposure_fixed flag is set, the exposure time will stay fix in~%# case of a brightness search. Hence the target brightness will be reached~%# only by varying the gain~%bool exposure_fixed~%~%~%# Flag which indicates if the brightness values are provided and hence should~%# be set before grabbing~%bool brightness_given~%~%# The average intensity values of the images. It depends the exposure time~%# as well as the gain setting. The interface will only try to reach this~%# value if the brightness_given flag is set to true.~%float32[] brightness_values~%~%# The brightness_continuous flag controls the auto brightness function.~%# If it is set to false, the given brightness will only be reached once.~%# Hence changing light conditions lead to changing brightness values.~%# If it is set to true, the given brightness will be reached continuously,~%# trying to adapt to changing light conditions.~%bool brightness_continuous~%~%~%# Flag which indicates if the gain is provided and hence should be set before~%# grabbing~%bool gain_given~%~%# The target gain values in percent of the maximal value the camera supports~%# For USB-Cameras, the gain is in dB, for GigE-Cameras it is given in so~%# called 'device specific units'. This value can be overriden from the~%# brightness search, in case that the gain_fixed flag is set to false.~%# The interface will only try to reach this values if the gain_given flag is~%# set to true.~%float32[] gain_values~%~%# If the gain_fixed flag is set, the gain value will stay fix in~%# case of a brightness search. Hence the target brightness will be reached~%# only by varying the exposure~%bool gain_fixed~%~%# Flag which indicates if the gamma value is provided and hence should be set~%# before grabbing~%bool gamma_given~%~%# Gamma correction of pixel intensity.~%# Adjusts the brightness of the pixel values output by the camera's sensor~%# to account for a non-linearity in the human perception of brightness or~%# of the display system (such as CRT).~%# The interface will only try to reach this value if the gamma_given flag is~%# set to true.~%float32[] gamma_values~%~%~%================================================================================~%MSG: camera_control_msgs/GrabHDRImageActionResult~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalStatus status~%GrabHDRImageResult result~%~%================================================================================~%MSG: actionlib_msgs/GoalStatus~%GoalID goal_id~%uint8 status~%uint8 PENDING         = 0   # The goal has yet to be processed by the action server~%uint8 ACTIVE          = 1   # The goal is currently being processed by the action server~%uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing~%                            #   and has since completed its execution (Terminal State)~%uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)~%uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due~%                            #    to some failure (Terminal State)~%uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,~%                            #    because the goal was unattainable or invalid (Terminal State)~%uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing~%                            #    and has not yet completed execution~%uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,~%                            #    but the action server has not yet confirmed that the goal is canceled~%uint8 RECALLED        = 8   # The goal received a cancel request before it started executing~%                            #    and was successfully cancelled (Terminal State)~%uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be~%                            #    sent over the wire by an action server~%~%#Allow for the user to associate a string with GoalStatus for debugging~%string text~%~%~%================================================================================~%MSG: camera_control_msgs/GrabHDRImageResult~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%##########################################~%################# RESULT #################~%##########################################~%~%########################################## DEPRECATED !!!~%# target values can not always be reached~%float32[] reached_values~%########################################## DEPRECATED !!!~%~%# The resulting HDR image generated out of several images with the inquired~%# image intensity settings.~%sensor_msgs/Image hdr_image~%~%# The reached values of the images e.g. the values that were set to the camera~%# before the grab~%float32[] reached_exposure_times~%~%float32[] reached_brightness_values~%~%float32[] reached_gain_values~%~%float32[] reached_gamma_values~%~%# Flag which indicates the success of the grabbing action~%bool success~%~%~%================================================================================~%MSG: sensor_msgs/Image~%# This message contains an uncompressed image~%# (0, 0) is at top-left corner of image~%#~%~%Header header        # Header timestamp should be acquisition time of image~%                     # Header frame_id should be optical frame of camera~%                     # origin of frame should be optical center of cameara~%                     # +x should point to the right in the image~%                     # +y should point down in the image~%                     # +z should point into to plane of the image~%                     # If the frame_id here and the frame_id of the CameraInfo~%                     # message associated with the image conflict~%                     # the behavior is undefined~%~%uint32 height         # image height, that is, number of rows~%uint32 width          # image width, that is, number of columns~%~%# The legal values for encoding are in file src/image_encodings.cpp~%# If you want to standardize a new string format, join~%# ros-users@lists.sourceforge.net and send an email proposing a new encoding.~%~%string encoding       # Encoding of pixels -- channel meaning, ordering, size~%                      # taken from the list of strings in include/sensor_msgs/image_encodings.h~%~%uint8 is_bigendian    # is this data bigendian?~%uint32 step           # Full row length in bytes~%uint8[] data          # actual matrix data, size is (step * rows)~%~%================================================================================~%MSG: camera_control_msgs/GrabHDRImageActionFeedback~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalStatus status~%GrabHDRImageFeedback feedback~%~%================================================================================~%MSG: camera_control_msgs/GrabHDRImageFeedback~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%##########################################~%################ FEEDBACK ################~%##########################################~%int32 curr_nr_images_taken~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GrabHDRImageAction>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'action_goal))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'action_result))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'action_feedback))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GrabHDRImageAction>))
  "Converts a ROS message object to a list"
  (cl:list 'GrabHDRImageAction
    (cl:cons ':action_goal (action_goal msg))
    (cl:cons ':action_result (action_result msg))
    (cl:cons ':action_feedback (action_feedback msg))
))