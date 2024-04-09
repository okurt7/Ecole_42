#ifndef _HUMANA_H_
#define _HUMANA_H_

#include <iostream>
#include "Weapon.h"

using std::cout;
using std::endl;
using std::string;

class HumanA {
public:
    HumanA(string name, Weapon &weapon);
    void attack();

private:
    Weapon &_weapon;
    string _name;
};

#endif
