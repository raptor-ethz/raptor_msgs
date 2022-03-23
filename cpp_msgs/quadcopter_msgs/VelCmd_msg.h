#pragma once
#include "Header_msg.h"
#include "Velocity_msg.h"

namespace cpp_msg {

struct VelCmd_msg {

  Header_msg header;

  Velocity_msg velocity;

  float yaw_angle;
};

} // namespace cpp_msg