#include "ship.h"
#include <iostream>
#include <string>

Ship::Ship(std::string name) {
    ship_types["CARRIER"] = 5;
    ship_types["BATTLESHIP"] = 4;
    ship_types["SUBMARINE"] = 3;
    ship_types["DESTROYER"] = 3;
    ship_types["PT_BOAT"] = 2;
    ship_class = name;
    size = ship_types.find(type)->second;
}

std::string Ship::get_name() {
     return ship_class;
}

int Ship::get_size() {return size;}
