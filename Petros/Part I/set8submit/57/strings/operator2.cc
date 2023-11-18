#include "strings.ih"

Strings &Strings::operator=(Strings &&tmp)
{
    swap(tmp);
    return *this;
}