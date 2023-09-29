#include "calculator.ih"

void calculator::evaluate()
{
    switch(d_operator)
    {
        case '+':
            cout << " = " << d_lvalue + d_rvalue << '\n';
            return;

        case '-':
            cout << " = " << d_lvalue - d_rvalue << '\n';
            return;

        case '/':
            if (d_rvalue == 0)
            {
                cout << "Error: Right value must be non-zero.\n";
                return;
            }
            cout << " = " << d_lvalue / d_rvalue << '\n';
            return;

        case '*': 
            cout << " = " << d_lvalue * d_rvalue << '\n';
            return;

        case '%':
            if (d_rvalue != 0 && d_isIntL && d_isIntR)
            {  
                int lvalue = d_lvalue;
                int rvalue = d_rvalue;
                cout << " = " << lvalue % rvalue << '\n';
                return;
            }
            cout << "Error: For this operation the numbers have to be nonzero integers.\n";
    }
}
