#include "parser.ih"

bool Parser::reset()
{
                // use the getLine function of the Line class
    bool lineRead = d_line.getLine();
    
                // reset d_integral
    d_integral = true;
    
    return lineRead;
}
