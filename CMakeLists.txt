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
   Point2D.msg
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

FILE(GLOB SOURCE_FILES *.hpp *.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
        )

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
add_dependencies(${PROJECT_NAME} ${${PROJECT_NAME}_EXPORTED_TARGETS})
add_dependencies(${PROJECT_NAME} ${catkin_EXPORTED_TARGETS})
target_link_libraries(${PROJECT_NAME} ${catkin_LIBRARIES})
