
(cl:in-package :asdf)

(defsystem "wam_msgs-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :geometry_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "BHandFingerPos" :depends-on ("_package_BHandFingerPos"))
    (:file "_package_BHandFingerPos" :depends-on ("_package"))
    (:file "BHandSpreadPos" :depends-on ("_package_BHandSpreadPos"))
    (:file "_package_BHandSpreadPos" :depends-on ("_package"))
    (:file "GravityComp" :depends-on ("_package_GravityComp"))
    (:file "_package_GravityComp" :depends-on ("_package"))
    (:file "OrtnMove" :depends-on ("_package_OrtnMove"))
    (:file "_package_OrtnMove" :depends-on ("_package"))
    (:file "PoseMove" :depends-on ("_package_PoseMove"))
    (:file "_package_PoseMove" :depends-on ("_package"))
    (:file "CartPosMove" :depends-on ("_package_CartPosMove"))
    (:file "_package_CartPosMove" :depends-on ("_package"))
    (:file "BHandGraspPos" :depends-on ("_package_BHandGraspPos"))
    (:file "_package_BHandGraspPos" :depends-on ("_package"))
    (:file "LEDControl" :depends-on ("_package_LEDControl"))
    (:file "_package_LEDControl" :depends-on ("_package"))
    (:file "BHandFingerVel" :depends-on ("_package_BHandFingerVel"))
    (:file "_package_BHandFingerVel" :depends-on ("_package"))
    (:file "JointMove" :depends-on ("_package_JointMove"))
    (:file "_package_JointMove" :depends-on ("_package"))
    (:file "BHandGraspVel" :depends-on ("_package_BHandGraspVel"))
    (:file "_package_BHandGraspVel" :depends-on ("_package"))
    (:file "Hold" :depends-on ("_package_Hold"))
    (:file "_package_Hold" :depends-on ("_package"))
    (:file "LASERControl" :depends-on ("_package_LASERControl"))
    (:file "_package_LASERControl" :depends-on ("_package"))
    (:file "BHandSpreadVel" :depends-on ("_package_BHandSpreadVel"))
    (:file "_package_BHandSpreadVel" :depends-on ("_package"))
  ))