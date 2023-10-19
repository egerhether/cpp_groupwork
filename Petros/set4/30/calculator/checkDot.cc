#include "calculator.ih"

bool calculator::checkDot(string number) const
{
    if (number.find('.') != string::npos) 
        return true;
    return false;
}
