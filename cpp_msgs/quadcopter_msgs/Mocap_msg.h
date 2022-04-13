#pragma once
#include "Euler_angle_msg.h"
#include "Header_msg.h"
#include "Vector3f_msg.h"
#include "Quaternion_msg.h"

namespace cpp_msg
{

  struct Mocap_msg
  {

    Header_msg header;

    bool occluded;

    Vector3f_msg position;

    Euler_angle_msg orientation;

    Quaternion_msg quaternion;

    float latency;
  };

} // namespace cpp_msg
