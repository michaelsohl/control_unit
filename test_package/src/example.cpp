#include "control_unit.h"
#include <vector>
#include <string>

int main() {
    control_unit();

    std::vector<std::string> vec;
    vec.push_back("test_package");

    control_unit_print_vector(vec);
}
