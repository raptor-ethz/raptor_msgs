#pragma once
#include "standard_msgs/Header_msg.h"
#include "standard_msgs/Velocity_msg.h"

namespace cpp_msg {

struct QuadVelocityCmd {

  Header header;

  Velocity velocity;

  float yaw_angle;
};

} // namespace cpp_msg