#include "parser.ih"

Parser::Return Parser::number(double *dest)
{
    string substring = d_line.next();

    if (substring.empty())
        return EOLN;

    try
    {
        if (dest)
            *dest = std::stod(substring);
        return NUMBER;
    }
    catch (const invalid_argument&)
    {
        return NO_NUMBER;
    }
}
