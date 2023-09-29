#include "calculator.ih"

bool calculator::checkDot(string number)
{
    if (number.find('.') != string::npos) 
        return true;
    return false;
}
