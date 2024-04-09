#include <iostream>
#include "FileReplacer.h"

int main(int ac, char *av[])
{
    if (ac < 4)
    {
        cout << "Please enter required arguments" << endl;
        return 1;
    }

    string fileName, s1, s2;
    fileName = av[1];
    s1 = av[2];
    s2 = av[3];
    if (fileName.empty() || s1.empty() || s2.empty())
    {
        cout << "Entered values are not empty" << endl;
        return 1;
    }

    FileReplacer fileReplacer(fileName, s1, s2);
    fileReplacer.replace();
    return 0;
}
