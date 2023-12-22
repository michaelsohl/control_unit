cmake_minimum_required(VERSION 3.15)
project(control_unit CXX)




add_library(control_unit src/control_unit.cpp)
target_include_directories(control_unit PUBLIC include)



set_target_properties(control_unit PROPERTIES PUBLIC_HEADER "include/control_unit.h")
install(TARGETS control_unit)
