#ifndef _MESSAGEANDCOLOR_H_
#define _MESSAGEANDCOLOR_H_

#include "iostream"

using std::string;
using std::cout;
using std::endl;

class MessageAndColor {
public:
    MessageAndColor();
    string getResetColor();
    string getRedColor();
    string getGreenColor();
    string getMagentaColor();
    void guidelineMessage();

private:
    string _resetColor;
    string _redColor;
    string _greenColor;
    string _magentaColor;
};

#endif
