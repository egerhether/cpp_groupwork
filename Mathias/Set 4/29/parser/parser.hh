#ifndef PARSER_HH
#define PARSER_HH

#include <iostream>
#include <string>

#include "line.ih"

class Parser
{
Line d_line;
bool d_integral;
public: 
    enum Return
{
    NUMBER,
    NO_NUMBER,
    EOLN
};

private:
Return convert(double *dest, string const &str);
bool pureDouble(double *dest, string const &str);

public:
    Parser();
    bool reset();
    Return number(double *dest);
    string next();
    bool isIntegral() const;
};

#endif
