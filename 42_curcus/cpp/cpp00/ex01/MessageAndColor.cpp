#include "MessageAndColor.h"

MessageAndColor::MessageAndColor() {
    _resetColor = "\033[0m";
    _redColor = "\033[1;31m";
    _greenColor = "\033[1;32m";
    _magentaColor = "\033[1;35m";
}

string MessageAndColor::getResetColor() {
    return _resetColor;
}

string MessageAndColor::getRedColor() {
    return _redColor;
}

string MessageAndColor::getGreenColor() {
    return _greenColor;
}

string MessageAndColor::getMagentaColor() {
    return _magentaColor;
}

void MessageAndColor::guidelineMessage() {
    cout << "________________________________________________________________" << endl;
    cout << "Welcome to the PhoneBook App !!!" << endl;
    cout << "The description is as follows." << endl;
    cout << _greenColor << "ADD     : " << _resetColor << "Save a new contact" << endl;
    cout << _greenColor << "SEARCH  : " << _resetColor << "Display a specific contact" << endl;
    cout << _greenColor << "EXIT    : " << _resetColor << "Exit PhoneBook App" << endl;
    cout << "________________________________________________________________" << endl;
}
