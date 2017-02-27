#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/marcus/catkin_ws_WAM/src/sensor_msgs"

# snsure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/marcus/catkin_ws_WAM/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/marcus/catkin_ws_WAM/install/lib/python2.7/dist-packages:/home/marcus/catkin_ws_WAM/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/marcus/catkin_ws_WAM/build" \
    "/usr/bin/python" \
    "/home/marcus/catkin_ws_WAM/src/sensor_msgs/setup.py" \
    build --build-base "/home/marcus/catkin_ws_WAM/build/sensor_msgs" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/marcus/catkin_ws_WAM/install" --install-scripts="/home/marcus/catkin_ws_WAM/install/bin"
