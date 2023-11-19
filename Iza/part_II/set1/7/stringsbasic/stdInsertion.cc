#include "strings.ih"

void Strings::stdInsertion(ostream &out, const Strings &strings, size_t idx)
{
    out << strings.at(idx) << strings.d_sep;
}