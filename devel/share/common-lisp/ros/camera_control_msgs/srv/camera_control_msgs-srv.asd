
(cl:in-package :asdf)

(defsystem "camera_control_msgs-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "SetBool" :depends-on ("_package_SetBool"))
    (:file "_package_SetBool" :depends-on ("_package"))
    (:file "SetGamma" :depends-on ("_package_SetGamma"))
    (:file "_package_SetGamma" :depends-on ("_package"))
    (:file "SetGain" :depends-on ("_package_SetGain"))
    (:file "_package_SetGain" :depends-on ("_package"))
    (:file "SetExposure" :depends-on ("_package_SetExposure"))
    (:file "_package_SetExposure" :depends-on ("_package"))
    (:file "GetCamProperties" :depends-on ("_package_GetCamProperties"))
    (:file "_package_GetCamProperties" :depends-on ("_package"))
    (:file "SetSleeping" :depends-on ("_package_SetSleeping"))
    (:file "_package_SetSleeping" :depends-on ("_package"))
    (:file "SetBrightness" :depends-on ("_package_SetBrightness"))
    (:file "_package_SetBrightness" :depends-on ("_package"))
    (:file "SetBinning" :depends-on ("_package_SetBinning"))
    (:file "_package_SetBinning" :depends-on ("_package"))
  ))