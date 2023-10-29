#include "strings.ih"

string* (*Strings::enlarge(bool useMove))(string*, size_t)
{
    if (useMove)
        return &Strings::enlargeByMove;
    else
        return &Strings::enlargeByCopy;
}
