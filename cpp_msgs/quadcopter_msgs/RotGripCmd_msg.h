#pragma once

namespace cpp_msg
{

  struct RotGripCmd_msg
  {

    int front_arm_deg;
    int back_arm_deg;
    bool trigger_gripper;
    bool get_sensor_val;
  };

} // namespace cpp_msg
