add_library(raptor_msgs INTERFACE)

target_include_directories(raptor_msgs INTERFACE
    standard_msgs
    quadcopter_msgs
)


target_link_libraries(raptor_msgs INTERFACE
    standard_msgs_lib
    quadcopter_msgs_lib
)


add_subdirectory(standard_msgs)
add_subdirectory(quadcopter_msgs)