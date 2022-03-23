add_library(msgs_lib INTERFACE)

target_include_directories(msgs_lib INTERFACE
standard_msgs
quadcopter_msgs
)

add_subdirectory(standard_msgs)
add_subdirectory(quadcopter_msgs)