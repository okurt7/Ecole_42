#ifndef _ZOMBIE_H_
#define _ZOMBIE_H_

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Zombie {
public:
    Zombie();
    ~Zombie();
    void setName(string name);
    void announce(void);

private:
    string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
