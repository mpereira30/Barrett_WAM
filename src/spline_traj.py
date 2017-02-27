#!/usr/bin/env python
import rospy
import rosbag
import numpy as np
from scipy import interpolate
import matplotlib.pyplot as plt
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
#from _RTJointPos import RTJointPos
#from _RTJointVel import RTJointVel
from _RTJointTraj import RTJointTraj

import os

#def get_bag_data(bagfile):
def spline_traj(msg, pub):
    	#import pdb; pdb.set_trace()

	jp1, jp2, jp3, jp4, jp5, jp6, jp7 = [[] for i in range(7)]
	jv1, jv2, jv3, jv4, jv5, jv6, jv7 = [[] for i in range(7)]
	ts =[]

	#for topic, msg, t in bagfile.read_messages(topics=["/joint_path_command"]):
# ['wam/base_yaw_joint', 'wam/elbow_pitch_joint', 'wam/palm_yaw_joint', 'wam/shoulder_pitch_joint', 'wam/shoulder_yaw_joint', 'wam/wrist_pitch_joint', 'wam/wrist_yaw_joint']
	for pts in msg.points[:]:
	        jp1.append(pts.positions[0])
	        jp2.append(pts.positions[3])
	        jp3.append(pts.positions[4])
	        jp4.append(pts.positions[1])
	        jp5.append(pts.positions[6])
	        jp6.append(pts.positions[5])
	        jp7.append(pts.positions[2])
	        ts.append(pts.time_from_start.secs + pts.time_from_start.nsecs/1.0e9 )

#		jv1.append(pts.positions[0])
#		jv2.append(pts.positions[3])
#		jv3.append(pts.positions[4])
#		jv4.append(pts.positions[1])
#		jv5.append(pts.positions[6])
#		jv6.append(pts.positions[5])
#		jv7.append(pts.positions[2])


	start_ts = ts[0]
	end_ts = ts[len(ts)-1]
	rate_hz = 500
	rate = rospy.Rate(500)
	T = np.linspace(0, end_ts-start_ts, (end_ts-start_ts)*rate_hz)

	tck = interpolate.splrep(ts, jp1)
	jp1_new = interpolate.splev(T, tck, der=0)
	tck = interpolate.splrep(ts, jp2)
	jp2_new = interpolate.splev(T, tck, der=0)
	tck = interpolate.splrep(ts, jp3)
	jp3_new = interpolate.splev(T, tck, der=0)
	tck = interpolate.splrep(ts, jp4)
	jp4_new = interpolate.splev(T, tck, der=0)
	tck = interpolate.splrep(ts, jp5)
	jp5_new = interpolate.splev(T, tck, der=0)
	tck = interpolate.splrep(ts, jp6)
	jp6_new = interpolate.splev(T, tck, der=0)
	tck = interpolate.splrep(ts, jp7)
	jp7_new = interpolate.splev(T, tck, der=0)

#	tck = interpolate.splrep(ts, jv1)
#	jv1_new = interpolate.splev(T, tck, der=0)
#	tck = interpolate.splrep(ts, jv2)
#	jv2_new = interpolate.splev(T, tck, der=0)
#	tck = interpolate.splrep(ts, jv3)
#	jv3_new = interpolate.splev(T, tck, der=0)
#	tck = interpolate.splrep(ts, jv4)
#	jv4_new = interpolate.splev(T, tck, der=0)
#	tck = interpolate.splrep(ts, jv5)
#	jv5_new = interpolate.splev(T, tck, der=0)
#	tck = interpolate.splrep(ts, jv6)
#	jv6_new = interpolate.splev(T, tck, der=0)
#	tck = interpolate.splrep(ts, jv7)
#	jv7_new = interpolate.splev(T, tck, der=0)

	#rt_jp = RTJointPos()
	#rt_jv = RTJointVel()
	#rt_jp.rate_limits = [1.0, 1.5, 1.5, 1.0, 1.5, 1.5, 1.0]
	#rt_jp.rate_limits = [0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5]
	#count = 0

    	rt_jp_traj = RTJointTraj()
    	rt_jp_traj.j1 = jp1_new[:]
    	rt_jp_traj.j2 = jp2_new[:]
    	rt_jp_traj.j3 = jp3_new[:]
    	rt_jp_traj.j4 = jp4_new[:]
    	rt_jp_traj.j5 = jp5_new[:]
    	rt_jp_traj.j6 = jp6_new[:]
    	rt_jp_traj.j7 = jp7_new[:]
    	rt_jp_traj.TS = T
	rt_jp_traj.size = len(T)
	rt_jp_traj.Hz = rate_hz
	pub.publish(rt_jp_traj)

#	while not rospy.is_shutdown() and count < len(T) :
#		rt_jp.joints = [jp1_new[count], jp2_new[count], jp3_new[count], jp4_new[count], jp5_new[count], jp6_new[count], jp7_new[count]]
#		pub.publish(rt_jp)
#		rt_jv.velocities = [jv1_new[count], jv2_new[count], jv3_new[count], jv4_new[count], jv5_new[count], jv6_new[count], jv7_new[count]]
#		pub.publish(rt_jv)
#		count = count + 1
#    	rate.sleep()

	#fig, axes = plt.subplots(nrows=7, ncols=1)
	#axes[0].plot(ts, jp1, 'r-', T, jp1_new, 'g--')
	#axes[1].plot(ts, jp2, 'r-', T, jp2_new, 'g--')
	#axes[2].plot(ts, jp3, 'r-', T, jp3_new, 'g--')
	#axes[3].plot(ts, jp4, 'r-', T, jp4_new, 'g--')
	#axes[4].plot(ts, jp5, 'r-', T, jp5_new, 'g--')
	#axes[5].plot(ts, jp6, 'r-', T, jp6_new, 'g--')
	#axes[6].plot(ts, jp7, 'r-', T, jp7_new, 'g--')
	#plt.figure(1)
	#plt.plot(ts, jp1, 'r-', T, jp1_new, 'g--')
	#plt.show()


def get_traj():
	rospy.init_node('get_traj', anonymous=True)
#	pub = rospy.Publisher('/wam/jnt_pos_cmd', RTJointPos, queue_size=10)
#	pub = rospy.Publisher('/wam/jnt_vel_cmd', RTJointVel, queue_size=50)
    	pub = rospy.Publisher('/wam/jnt_pos_traj', RTJointTraj, queue_size=1)
    	rospy.Subscriber("/joint_path_command", JointTrajectory, spline_traj, pub)
	rospy.spin()

if __name__ == '__main__':
	#import pdb; pdb.set_trace()
    	#get_bag_data(rosbag.Bag("test_2017-02-24-12-02-12.bag"))
	try:
    		get_traj()
	except rospy.ROSInterruptException:
    		pass
