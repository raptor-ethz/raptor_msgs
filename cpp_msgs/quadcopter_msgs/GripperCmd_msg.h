#pragma once
#include "standard_msgs/Euler_angle_msg.h"
#include "standard_msgs/Header_msg.h"
#include "standard_msgs/Position_msg.h"

namespace cpp_msg {

struct GripperCmd_msg {

  Header header;

  Position position;

  Euler_angle orientation;

  float latency;
};

} // namespace cpp_msg
