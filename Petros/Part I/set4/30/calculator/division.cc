#include "calculator.ih"

void calculator::division() const
{
        if (d_rvalue == 0)      // div by 0 undefined
        {
            cout << "Error: Right value must be non-zero.\n";
            return;
        }
        cout << " = " << d_lvalue / d_rvalue << '\n';
}
