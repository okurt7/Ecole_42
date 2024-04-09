#ifndef _HARL_H_
#define _HARL_H_

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Harl {
public:
    Harl();
    void complain( std::string level );

private:
    string _levels[4];
    void (Harl::*fn[4])();

    void debug();
    void info();
    void warning();
    void error();
};

#endif
