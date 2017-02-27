# Install script for directory: /home/marcus/catkin_ws_WAM/src/pylon_camera

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/home/marcus/catkin_ws_WAM/install")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/marcus/catkin_ws_WAM/build/pylon_camera/catkin_generated/installspace/pylon_camera.pc")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pylon_camera/cmake" TYPE FILE FILES
    "/home/marcus/catkin_ws_WAM/build/pylon_camera/catkin_generated/installspace/pylon_cameraConfig.cmake"
    "/home/marcus/catkin_ws_WAM/build/pylon_camera/catkin_generated/installspace/pylon_cameraConfig-version.cmake"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pylon_camera" TYPE FILE FILES "/home/marcus/catkin_ws_WAM/src/pylon_camera/package.xml")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  INCLUDE("/home/marcus/catkin_ws_WAM/build/pylon_camera/catkin_generated/safe_execute_install.cmake")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pylon_camera/launch" TYPE DIRECTORY FILES "/home/marcus/catkin_ws_WAM/src/pylon_camera/launch/" FILES_MATCHING REGEX "/[^/]*\\.launch$")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pylon_camera/config" TYPE DIRECTORY FILES "/home/marcus/catkin_ws_WAM/src/pylon_camera/config/" FILES_MATCHING REGEX "/[^/]*\\.yaml$")
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/pylon_camera" TYPE PROGRAM FILES
    "/home/marcus/catkin_ws_WAM/src/pylon_camera/scripts/file_sequencer.py"
    "/home/marcus/catkin_ws_WAM/src/pylon_camera/scripts/result_bag_to_action.py"
    "/home/marcus/catkin_ws_WAM/src/pylon_camera/scripts/sequence_to_file.py"
    "/home/marcus/catkin_ws_WAM/src/pylon_camera/scripts/grab_and_save_image_action_server.py"
    "/home/marcus/catkin_ws_WAM/src/pylon_camera/scripts/toggle_camera"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpylon_camera.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpylon_camera.so")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpylon_camera.so"
         RPATH "")
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/marcus/catkin_ws_WAM/devel/lib/libpylon_camera.so")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpylon_camera.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpylon_camera.so")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpylon_camera.so")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpylon_camera.so")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pylon_camera/pylon_camera_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pylon_camera/pylon_camera_node")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pylon_camera/pylon_camera_node"
         RPATH "")
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pylon_camera" TYPE EXECUTABLE FILES "/home/marcus/catkin_ws_WAM/devel/lib/pylon_camera/pylon_camera_node")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pylon_camera/pylon_camera_node" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pylon_camera/pylon_camera_node")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pylon_camera/pylon_camera_node")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pylon_camera/pylon_camera_node")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pylon_camera/write_device_user_id_to_camera" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pylon_camera/write_device_user_id_to_camera")
    FILE(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pylon_camera/write_device_user_id_to_camera"
         RPATH "")
  ENDIF()
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pylon_camera" TYPE EXECUTABLE FILES "/home/marcus/catkin_ws_WAM/devel/lib/pylon_camera/write_device_user_id_to_camera")
  IF(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pylon_camera/write_device_user_id_to_camera" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pylon_camera/write_device_user_id_to_camera")
    FILE(RPATH_REMOVE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pylon_camera/write_device_user_id_to_camera")
    IF(CMAKE_INSTALL_DO_STRIP)
      EXECUTE_PROCESS(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/pylon_camera/write_device_user_id_to_camera")
    ENDIF(CMAKE_INSTALL_DO_STRIP)
  ENDIF()
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/pylon_camera" TYPE DIRECTORY FILES "/home/marcus/catkin_ws_WAM/src/pylon_camera/include/pylon_camera/" FILES_MATCHING REGEX "/[^/]*\\.h$" REGEX "/internal$" EXCLUDE)
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

