
echo "https://www.youtube.com/watch?v=dF2mlKJqkUg"
gnome-terminal --tab -e "roslaunch husky_3d_mapping husky_3d_mapping.launch"

gnome-terminal --tab -e "roslaunch husky_3d_mapping teleop.launch"
wmctrl -a teleop_twist_keyboard.py -b add,above

#rosrun octomap_server octomap_saver -f $(rospack find husky_3d_mapping)/map/map_3d.bt