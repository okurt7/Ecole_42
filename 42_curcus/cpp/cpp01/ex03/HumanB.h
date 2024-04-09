#ifndef _HUMANB_H_
#define _HUMANB_H_

#include <iostream>
#include "Weapon.h"

using std::cout;
using std::endl;
using std::string;

class HumanB {
public:
    HumanB(string name);
    void attack();
    void setWeapon(Weapon &weapon);
private:
    Weapon *_weapon;
    string _name;
};

#endif
