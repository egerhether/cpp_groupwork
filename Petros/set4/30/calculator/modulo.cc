#include "calculator.ih"

void calculator::modulo() const
{

        // If left and right values are integers and right value non-zero
        // % is defined
        if (d_rvalue != 0 && d_isIntL && d_isIntR)
        {  
            int lvalue = d_lvalue;
            int rvalue = d_rvalue;
            cout << " = " << lvalue % rvalue << '\n';
            return;
        }
        cout << "Error: For this operation the numbers have to be integers.\n"
             << "and the right value non-zero\n";
}
