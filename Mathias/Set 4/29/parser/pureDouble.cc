
#include "parser.ih"

bool Parser::pureDouble(double *dest, string const &str)
{
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
    catch (const exception &)
    {                   // conversion has failed,  catch it
        return false;  
    }
}
