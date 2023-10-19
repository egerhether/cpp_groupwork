#include "calculator.ih"

bool calculator::number(double *dest, bool *isInt)
{
                                // We need a number to only contain:
                                // digits, '.', '-'
                                // d_string val our number we want to validate
    
                                // if valid
    if (hasOnly("0123456789.-", d_strVal) && !d_strVal.empty())
    {
                                // save the number as a double in its correct
                                // data variable (d_ldata or d_rdata)
        *dest = stod(d_strVal);

                                // and a bool value of whether it is an int
                                // (if checkDot returns false then int)
        *isInt = !checkDot(d_strVal);
        return true;
    }
    return false;
}
