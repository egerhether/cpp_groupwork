#ifndef LINE_H_
#define LINE_H_

#include <string>

class Line 
{
    std::string inputLine;
    
    public:
    bool getLine();
    std::string next();
};

#endif