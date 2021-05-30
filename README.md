# Clearpath Husky - 3D Mapping using Kinect sensor
This repository is using a [previous version](https://github.com/husky/husky/tree/3af80eab1ec0b0d44259c6c8797e4a28797507ca) of the official [husky repository](https://github.com/husky/husky), since the support for Kinect XBox 360 was removed in previous versions.

For Husky instructions and tutorials, please see [Robots/Husky](http://wiki.ros.org/Robots/Husky).

husky
=====
Common ROS packages for the Clearpath Husky
 - husky_control : Control configuration
 - husky_description : Robot description (URDF)
 - husky_msgs : Message definitions
 - husky_navigation : Navigation configurations and demos

husky_desktop
=============
Desktop ROS packages for the Clearpath Husky, which may pull in graphical dependencies.
 - husky_viz : Visualization (rviz) configuration and bringup

husky_robot
===========
Robot ROS packages for the Clearpath Husky, for operating robot hardware.
 - husky_bringup : Bringup launch files and scripts.
 - husky_base : Hardware driver for communicating with the onboard MCU.

husky_simulator
==============
Simulator ROS packages for the Clearpath Husky.
 - husky_gazebo : Gazebo plugin definitions and extensions to the robot URDF.

husky_3d_mapping
==================
3d Mapping ROS packages using Kinect sensor and octomap server mapping.
 - husky_3d_mapping : Mapping launch files and dependencies.

husky_speed_controller
==================
Implement an automated control for velocity for reaching a desired goal. The goal is marked from RViz or published to /move_base_simple/goal topic.
 - husky_3d_mapping : Speed controller node.

husky_3d_nav
==================
This is an attempted 3D navigation stack solution. (In progress.)
 - husky_3d_nav : RRT Planner based on OctoMap mapping and utilizing EKF Localization.