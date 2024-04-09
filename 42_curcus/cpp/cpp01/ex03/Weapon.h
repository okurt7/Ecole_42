#ifndef _WEAPON_H_
#define _WEAPON_H_

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Weapon {
public:
    Weapon();
    Weapon(string type);
    const string& getType();
    void setType(string type);

private:
    string _type;
};

#endif
