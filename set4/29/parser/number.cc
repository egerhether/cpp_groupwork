#include "parser.ih"

Parser::Return Parser::number(double *dest)
{
    string substring = d_line.next();

    if (substring.empty())
        return EOLN;

    double tempValue;
    Parser::Return result = convert(&tempValue, substring);

    if (result == NUMBER && dest)
        *dest = tempValue;

    return result;
}
