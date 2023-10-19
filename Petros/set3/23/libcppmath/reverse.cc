#include "cppmath.ih"

void reverse(string* toRev)
{
    string const toIter = *toRev;
    string reversed;

        for (size_t idx = toIter.length(); idx != 0; idx--)
        {
           reversed.append(1, toIter[idx-1]);
        }

    *toRev = reversed;
    return;
}
