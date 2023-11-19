#include "strings.ih"

Strings const &Strings::operator()(char const *sep)
{
    d_sep = sep;
    return *this;
}