add_library(quadcopter_msgs_lib INTERFACE)

target_sources(quadcopter_msgs_lib INTERFACE
    Mocap_msg.h
    MocapMarker_msg.h
    QuadPosCmd_msg.h
    QuadVelCmd_msg.h
    QuadAction_msg.h
    GripCmd_msg.h
    QuadFeedback_msg.h
    QuadStatus_msg.h
    GripperSensor_msg.h
)

target_link_libraries(quadcopter_msgs_lib INTERFACE
    standard_msgs_lib 
)