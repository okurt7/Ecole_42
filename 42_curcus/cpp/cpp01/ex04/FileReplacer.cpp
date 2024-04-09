#include "FileReplacer.h"

FileReplacer::FileReplacer(std::string fileName, std::string s1, std::string s2) {
    _fileName = fileName;
    _s1 = s1;
    _s2 = s2;
}

void FileReplacer::replace() {

    ifstream inputFile(_fileName);
    if (!inputFile.is_open())
    {
        cerr << "Error opening file " << _fileName << endl;
        return;
    }

    string copiedFileName = _fileName + ".replace";
    ofstream copiedFile(copiedFileName);
    if (!copiedFile.is_open())
    {
        cerr << "Error creating file " << copiedFileName << endl;
        return;
    }

    string line;
    while (getline(inputFile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(_s1, pos)) != string::npos)
        {
            line.erase(pos, _s1.length());
            line.insert(pos, _s2);
            pos += _s2.length();
        }
        copiedFile << line << endl;
    }
    inputFile.close();
    copiedFile.close();
    cout << "Done!" << endl;
}
