#pragma once
#include "Header_msg.h"
#include "Vector3f_msg.h"

namespace cpp_msg
{

  struct MocapSegments_msg
  {

    Header_msg header;

    Vector3f_msg segments[10];
  };

} // namespace cpp_msg
