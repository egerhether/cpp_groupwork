#include "calculator.ih"

bool calculator::getOperator()
{
                                // only one operator given and is one
                                // of the supported ones.
    if ((d_strVal.size() == 1) && hasOnly("+-*/%", d_strVal))
    {
        d_operator = d_strVal[0]; 
        return true;
    }
    else
        return false; 
}
