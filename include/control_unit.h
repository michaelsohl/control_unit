#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define CONTROL_UNIT_EXPORT __declspec(dllexport)
#else
  #define CONTROL_UNIT_EXPORT
#endif

CONTROL_UNIT_EXPORT void control_unit();
CONTROL_UNIT_EXPORT void control_unit_print_vector(const std::vector<std::string> &strings);
