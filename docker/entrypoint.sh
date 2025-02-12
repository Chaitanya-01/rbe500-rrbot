#!/bin/bash
# Basic entrypoint for ROS / Colcon Docker containers

# Source ROS 2
source /opt/ros/${ROS_DISTRO}/setup.bash
echo "Sourced ROS 2 ${ROS_DISTRO}"

# Source the base workspace, if built
if [ -f /rbe500hw23_ws/install/setup.bash ]
then
  source /rbe500hw23_ws/install/setup.bash
  echo "Sourced rbe500hw23 base workspace"
fi

# Source the overlay workspace, if built
if [ -f /overlay_ws/install/setup.bash ]
then
  source /overlay_ws/install/setup.bash
  echo "Sourced my overlay workspace"
fi

# Execute the command passed into this entrypoint
exec "$@"