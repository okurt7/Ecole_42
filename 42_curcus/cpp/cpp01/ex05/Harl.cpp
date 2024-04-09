#include "Harl.h"

Harl::Harl() {
    void (Harl::*tmp[4])(void);
    tmp[0] = &Harl::debug;
    tmp[1] = &Harl::info;
    tmp[2] = &Harl::warning;
    tmp[3] = &Harl::error;
    const char* str[4] = { "DEBUG","INFO","WARNING","ERROR" };
    for (int i = 0; i < 4; i++){
        _levels[i] = str[i];
        fn[i] = tmp[i];
    }
}

void Harl::complain(string level) {
    int i = 0;
    while(i < 4) {
        if(this->_levels[i] == level){
            (this->*fn[i])();
            break;
        }
        i++;
    }
}

void Harl::debug() {
    std::cout <<"[DEBUG]   ";
	std::cout << "I love to get extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.";
	std::cout << " I just love it!" << std::endl;
}

void Harl::info() {
    std::cout << "[INFO]    ";
	std::cout << "I cannot believe adding extra bacon cost more money.";
	std::cout << " You don’t put enough! If you did I would not have to ask";
	std::cout << " for it!" << std::endl;
}

void Harl::warning() {
    std::cout <<"[WARNING] ";
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I’ve been coming here for years and you just started ";
	std::cout << "working here last month." << std::endl;
}

void Harl::error() {
    std::cout <<"[ERROR]   ";
	std::cout << "This is unacceptable, I want to speak to the manager now.";
	std::cout << std::endl;
}



