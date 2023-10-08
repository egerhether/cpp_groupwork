#ifndef LINE_HH
#define LINE_HH
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Line
{
    string line;
    istringstream stream;

    public:
        bool getLine();
        string next();
};

#endif