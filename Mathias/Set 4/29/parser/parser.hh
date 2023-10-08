#ifndef PARSER_HH
#define PARSER_HH

#include <iostream>
#include <string>

#include "../line/line.hh"

class Parser
{
    public:
         enum Return
        {
            NUMBER,
            NO_NUMBER,
            EOLN
        };
        Parser();
        bool reset();
        Return number(double *dest);
        string next();
        bool isIntegral() const;

    Line d_line;
    bool d_integral;
    private:
    Return convert(double *dest, string const &str);
    bool pureDouble(double *dest, string const &str);

};

#endif
