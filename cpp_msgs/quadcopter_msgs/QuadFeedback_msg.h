#pragma once
#include "QuadStatus_msg.h"

enum FeedbackType { none, status, arm, disarm, takeoff, land, offboard };

enum ResultType { none, success, fail, disaster };

namespace cpp_msg {

struct QuadFeedback_msg {

  FeedbackType feedback;

  QuadStatus_msg status;

  ResultType result;
};

} // namespace cpp_msg