#include "HumanB.h"

HumanB::HumanB(std::string name) {
    _name = name;
    _weapon = NULL;
}

void HumanB::attack() {
    cout << _name << " attacks with their " << _weapon->getType() << endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    _weapon = &weapon;
}
