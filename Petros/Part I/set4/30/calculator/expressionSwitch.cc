#include "calculator.ih"

bool calculator::expressionSwitch(int idx, string input)
{
    switch(idx)                 // case: 0 - Lvalue, 1 - operator, 2 - Rvalue
    {
        case 0:
            d_strVal = input;
            if (!number(&d_lvalue,&d_isIntL))
            {
                cout << "Error: Invalid format\n";
                return false;
            }
            break;

        case 1:
            d_strVal = input;
            if (!getOperator())
            {
                cout << "Error: Invalid format\n";
                return false;
            }
            break;

        case 2:
            d_strVal = input;
            if (!number(&d_rvalue,&d_isIntR))
            {
                cout << "Error: Invalid format\n";
                return false;
            }
            break;
    }
return true;
}
