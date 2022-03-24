#pragma once
#include "Header_msg.h"
#include "Vector3f_msg.h"

namespace cpp_msg {

struct QuadVelCmd_msg {

  Header_msg header;

  Vector3f_msg velocity;

  float yaw_angle;
};

} // namespace cpp_msg