#ifndef INCLUDED_CALCULATOR_
#define INCLUDED_CALCULATOR_

#include <iostream>

class calculator
{
    double      d_lvalue;
    char        d_operator;
    double      d_rvalue;
    bool        d_isIntL;                    // If the values are integral
    bool        d_isIntR;
    
    std::string d_line;
    std::string d_strVal;



    public:
                //member function
        void run();

    private:

        bool hasOnly(char const *characters, std::string const &object) const;
        bool checkDot(std::string number) const;

        bool expression();
        bool number(double *dest, bool *isInt);
        bool getOperator();
        void evaluate() const;
        void division() const;
        void modulo() const;
        bool expressionSwitch(int idx, std::string input);
        
};
        
#endif
