#include "calculator.ih"

bool calculator::getOperator()
{
    if ((d_strVal.size() == 1) && hasOnly("+-*/%", d_strVal))
    {
        d_operator = d_strVal[0]; 
        return true;
    }
    else
        return false; 
}
