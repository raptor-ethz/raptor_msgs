#pragma once
#include "Header_msg.h"
#include "Vector3f_msg.h"

namespace cpp_msg {

struct QuadPosCmd_msg {

  Header_msg header;

  Vector3f_msg position;

  float yaw_angle;
};

} // namespace cpp_msg