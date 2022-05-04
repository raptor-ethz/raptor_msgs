#pragma once
enum GripperType
{
  grip_rot,
  grip_lin,
  grip_rotlin
};

namespace cpp_msg
{

  struct GripCmd_msg
  {
    GripperType gripper;
    int servo_1_deg;
    int servo_2_deg;
    int servo_3_deg;
    bool trigger_gripper;
    bool request_sensor;
  };

} // namespace cpp_msg
