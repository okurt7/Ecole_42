#include "Zombie.h"

Zombie::Zombie() {
    _name = "Default";
    cout << "Default Constructor" << endl;
}

Zombie::~Zombie() {
    cout << "Default Destructor" << endl;
}

void Zombie::setName(std::string name) {
    _name = name;
}

void Zombie::announce() {
    if (_name.empty())
        cout << "Sorry I cant write this name because is empty!!!" << endl;
    else
        cout << _name << ": BraiiiiiiinnnzzzZ..." << endl;
}