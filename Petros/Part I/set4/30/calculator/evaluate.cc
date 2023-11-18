#include "calculator.ih"

void calculator::evaluate() const
{
                                // cases depend on d_operator
    switch(d_operator)
    {
        case '+':
            cout << " = " << d_lvalue + d_rvalue << '\n';
            return;

        case '-':
            cout << " = " << d_lvalue - d_rvalue << '\n';
            return;

        case '/':
            division();
            return;

        case '*': 
            cout << " = " << d_lvalue * d_rvalue << '\n';
            return;

        case '%':
            modulo();

    }
}
