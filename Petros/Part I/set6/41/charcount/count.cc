#include "charcount.ih"

void CharCount::count(istream &input)
{
    char nextChar;

    while (input.get(nextChar))
        locate(nextChar);
}
    
