#include "strings.ih"

string *(*Strings::enlarge())(string *, size_t)
{
    if (d_copy)
        return enlargeByCopy;
    else
        return enlargeByMove;
}
