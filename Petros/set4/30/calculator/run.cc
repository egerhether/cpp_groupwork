#include "calculator.ih"

void calculator::run()
{
    while(true)
    {
        cout << "? ";
        getline(cin, d_line);
        if (d_line.empty())
            break;
        bool good = expression();
        if (good)
        {    
            evaluate();     // evaluate the expression.
        }
    }
}
