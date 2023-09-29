#include "calculator.ih"

bool calculator::number(double *dest, bool *isInt)
{

    if (hasOnly("0123456789.-", d_strVal) && !d_strVal.empty())
    {
        *dest = stod(d_strVal);
        *isInt = !checkDot(d_strVal);
        return true;
    }
    return false;
}
