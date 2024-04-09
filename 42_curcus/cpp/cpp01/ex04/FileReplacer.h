#ifndef _FILEREPLACER_H_
#define _FILEREPLACER_H_

#include <iostream>
#include <fstream>

using std::string;
using std::ifstream;
using std::ofstream;
using std::cout;
using std::cerr;
using std::endl;

class FileReplacer {
public:
    FileReplacer(string fileName, string s1, string s2);
    void replace();

private:
    string _fileName;
    string _s1;
    string _s2;
};

#endif
