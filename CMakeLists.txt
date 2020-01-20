cmake_minimum_required(VERSION 2.8.3)
project(common_msgs)

add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  message_generation
)

add_message_files(
   FILES
   attitude.msg
)
generate_messages(
   DEPENDENCIES
   std_msgs
)

catkin_package(
 INCLUDE_DIRS
 LIBRARIES common_msgs
 CATKIN_DEPENDS roscpp rospy std_msgs message_runtime
 DEPENDS system_lib
)

include_directories(
   include
   ${catkin_INCLUDE_DIRS}
)