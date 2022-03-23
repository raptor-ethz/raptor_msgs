#pragma once
#include "standard_msgs/Header_msg.h"
#include "standard_msgs/Position_msg.h"

namespace cpp_msg {

struct QuadPositionCmd {

  Header header;

  Position position;

  float yaw_angle;
};

} // namespace cpp_msg