#include "HumanA.h"


HumanA::HumanA(string name, Weapon &weapon) : _weapon(weapon) {
    _name = name;
}

void HumanA::attack() {
    cout << _name << " attacks with their " << _weapon.getType() << endl;
}
