#include <iostream>



void control_unit(){
  std::cout << "This is control_unit/1.0";
}

void control_unit_print_vector(const std::vector<std::string> &strings) {
    for(std::vector<std::string>::const_iterator it = strings.begin(); it != strings.end(); ++it) {
        std::cout << "control_unit/1.0 " << *it << std::endl;
    }
}
