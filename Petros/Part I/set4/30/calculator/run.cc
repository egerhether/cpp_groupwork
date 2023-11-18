#include "calculator.ih"

void calculator::run()
{
    while(true)
    {
        cout << "? ";
        getline(cin, d_line);   // get line from cin
        
        if (d_line.empty())     // if line is empty stop
            break;
        
                                // expression returns true if the input line
                                // is valid
        if (expression()) 
            evaluate();     // evaluate the expression.
    }
}
