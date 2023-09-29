#ifndef INCLUDED_CALCULATOR_
#define INCLUDED_CALCULATOR_
#include <iostream>

class calculator
{
    public:
                //member function
        void run();

    private:
        double      d_lvalue;
        char        d_operator;
        double      d_rvalue;
        bool        d_isIntL;                    // If the values are integral
        bool        d_isIntR;
        
        std::string d_line;
        std::string d_strVal;


        bool hasOnly(char const *characters, std::string const &object);
        bool checkDot(std::string number);
        bool expression();
        bool number(double *dest, bool *isInt);
        bool getOperator();
        void evaluate();
        void checkType();
};
        
#endif
