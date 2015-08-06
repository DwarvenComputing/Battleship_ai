#include <iostream>
#include <string>
#include "ship.h"

int main() {
    Ship bship("CARRIER");
    std::string name1 = bship.get_name();
    std::cout << "ship type is " << name1 << " and size is " << bship.get_size() << std::endl;
    return 0;
}
