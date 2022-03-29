#pragma once
#include "Euler_angle_msg.h"
#include "Header_msg.h"
#include "Vector3f_msg.h"

namespace cpp_msg {

struct Mocap_msg {

  Header_msg header;

  Vector3f_msg position;

  Euler_angle_msg orientation;

  float latency;
};

} // namespace cpp_msg
