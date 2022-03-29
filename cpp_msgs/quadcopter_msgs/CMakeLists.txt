add_library(quadcopter_msgs_lib INTERFACE)

target_sources(quadcopter_msgs_lib INTERFACE
    Mocap_msg.h
    QuadPosCmd_msg.h
    QuadVelCmd_msg.h
    QuadAction_msg.h
    RotGripCmd_msg.h
    QuadFeedback_msg.h
    QuadStatus_msg.h
)

target_link_libraries(quadcopter_msgs_lib INTERFACE
    raptor_msgs
    standard_msgs_lib 
)