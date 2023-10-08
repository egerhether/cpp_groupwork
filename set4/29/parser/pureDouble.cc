#include "parser.ih"

bool Parser::pureDouble(double* dest, string const& str)
{
    size_t pos = 0;
    *dest = stod(str, &pos);
                                    // Check if all characters were used
    if (pos != str.length())
        return false;               // Not all characters were used

    for (char ch : str)             // Check for dot, 'e', or 'E' characters
    {
        if (ch == '.' || ch == 'e' || ch == 'E')
        {
            d_integral = false;
            break;
        }
    }
    return true;                    // Successful conversion
}
