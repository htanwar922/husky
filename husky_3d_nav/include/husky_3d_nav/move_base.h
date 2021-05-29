#ifndef NAV_MOVE_BASE_ACTION_H_
#define NAV_MOVE_BASE_ACTION_H_

#include <vector>
#include <string>

#include <ros/ros.h>
#include <actionlib/server/simple_action_server.h>
#include <move_base_msgs/MoveBaseAction.h>

#include <dynamic_reconfigure/server.h>
#include "move_base/MoveBaseConfig.h"

#include "tf2_ros/buffer.h"


namespace move_base {
//typedefs to help us out with the action server so that we don't hace to type so much
typedef actionlib::SimpleActionServer<move_base_msgs::MoveBaseAction> MoveBaseActionServer;

enum MoveBaseState {
PLANNING,
CONTROLLING,
CLEARING
};

enum RecoveryTrigger
{
PLANNING_R,
CONTROLLING_R,
OSCILLATION_R
};

class MoveBase {
public:
MoveBase(tf2_ros::Buffer& tf);

virtual ~MoveBase();

};

}

#endif