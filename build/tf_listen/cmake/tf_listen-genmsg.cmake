# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "tf_listen: 1 messages, 0 services")

set(MSG_I_FLAGS "-Itf_listen:/home/marcus/catkin_ws_WAM/src/tf_listen/msg;-Istd_msgs:/opt/ros/indigo/share/std_msgs/cmake/../msg;-Isensor_msgs:/opt/ros/indigo/share/sensor_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/indigo/share/geometry_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(genlisp REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(tf_listen_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/marcus/catkin_ws_WAM/src/tf_listen/msg/tf_listen_mes.msg" NAME_WE)
add_custom_target(_tf_listen_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "tf_listen" "/home/marcus/catkin_ws_WAM/src/tf_listen/msg/tf_listen_mes.msg" "std_msgs/Header:sensor_msgs/Image"
)

#
#  langs = gencpp;genlisp;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(tf_listen
  "/home/marcus/catkin_ws_WAM/src/tf_listen/msg/tf_listen_mes.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/indigo/share/sensor_msgs/cmake/../msg/Image.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/tf_listen
)

### Generating Services

### Generating Module File
_generate_module_cpp(tf_listen
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/tf_listen
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(tf_listen_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(tf_listen_generate_messages tf_listen_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/marcus/catkin_ws_WAM/src/tf_listen/msg/tf_listen_mes.msg" NAME_WE)
add_dependencies(tf_listen_generate_messages_cpp _tf_listen_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(tf_listen_gencpp)
add_dependencies(tf_listen_gencpp tf_listen_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS tf_listen_generate_messages_cpp)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(tf_listen
  "/home/marcus/catkin_ws_WAM/src/tf_listen/msg/tf_listen_mes.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/indigo/share/sensor_msgs/cmake/../msg/Image.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/tf_listen
)

### Generating Services

### Generating Module File
_generate_module_lisp(tf_listen
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/tf_listen
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(tf_listen_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(tf_listen_generate_messages tf_listen_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/marcus/catkin_ws_WAM/src/tf_listen/msg/tf_listen_mes.msg" NAME_WE)
add_dependencies(tf_listen_generate_messages_lisp _tf_listen_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(tf_listen_genlisp)
add_dependencies(tf_listen_genlisp tf_listen_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS tf_listen_generate_messages_lisp)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(tf_listen
  "/home/marcus/catkin_ws_WAM/src/tf_listen/msg/tf_listen_mes.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/indigo/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/indigo/share/sensor_msgs/cmake/../msg/Image.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/tf_listen
)

### Generating Services

### Generating Module File
_generate_module_py(tf_listen
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/tf_listen
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(tf_listen_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(tf_listen_generate_messages tf_listen_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/marcus/catkin_ws_WAM/src/tf_listen/msg/tf_listen_mes.msg" NAME_WE)
add_dependencies(tf_listen_generate_messages_py _tf_listen_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(tf_listen_genpy)
add_dependencies(tf_listen_genpy tf_listen_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS tf_listen_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/tf_listen)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/tf_listen
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
add_dependencies(tf_listen_generate_messages_cpp std_msgs_generate_messages_cpp)
add_dependencies(tf_listen_generate_messages_cpp sensor_msgs_generate_messages_cpp)

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/tf_listen)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/tf_listen
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
add_dependencies(tf_listen_generate_messages_lisp std_msgs_generate_messages_lisp)
add_dependencies(tf_listen_generate_messages_lisp sensor_msgs_generate_messages_lisp)

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/tf_listen)
  install(CODE "execute_process(COMMAND \"/usr/bin/python\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/tf_listen\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/tf_listen
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
add_dependencies(tf_listen_generate_messages_py std_msgs_generate_messages_py)
add_dependencies(tf_listen_generate_messages_py sensor_msgs_generate_messages_py)
