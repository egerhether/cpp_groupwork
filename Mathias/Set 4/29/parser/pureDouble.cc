
#include "parser.ih"

bool Parser::pureDouble(double *dest, string const &str)
{
    // ML: You do not need a try catch block here (why?)
    try
    {
        size_t pos = 0;
        *dest = stod(str, &pos);

                        // check if all characters were used
        if (pos != str.length())
        {               // not all characters are used
            return false;
        }

                        // Check for dot, 'e', or 'E' characters
        for (char ch : str)
        {
            if (ch == '.' || ch == 'e' || ch == 'E')
            {           // contains a dot or 'e'/'E'
                d_integral = false;
                break;
            }
        }

        return true;    // successful conversion
    }
    // ML: exception const &
    catch (const exception &)
    {                   // sonversion failed
        return false;  
    }
}
