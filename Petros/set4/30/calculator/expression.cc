#include "calculator.ih"

bool calculator::expression()
{
   
    for (int idx = 0, opos = 0, oposPrev, on; idx != 3; ++idx)
    {
        oposPrev = opos;
        opos = d_line.find(' ', opos) + 1;
        on = opos - oposPrev - 1;
        string const input = d_line.substr(oposPrev, on);
        cout << on << '\n';
        if (idx == 2 && on > 0)
        {
            cout << "Error: Invalid input\n";
            return false;
        }
        switch(idx)
        {
            case 0:
            d_strVal = input;
            if (!number(&d_lvalue,&d_isIntL))
            {
                cout <<"Error: Invalid format\n";
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
                cout <<"Error: Invalid format\n";
                return false;
            }
            break;
        }
    } 
return true;
}
