#include "Weapon.h"

Weapon::Weapon() {
    _type = "Undefined";
}

Weapon::Weapon(std::string type) {
    _type = type;
}

const string &Weapon::getType() {
    return _type;
}

void Weapon::setType(std::string type) {
    _type = type;
}