#include "strings.ih"

ostream &Strings::insertInto(ostream &out) const
{
    for (size_t idx = 0; idx != d_size; ++idx)
        d_manip(out, *this, idx);

    d_manip = &stdInsertion;
    d_sep = "\n";
    return out;
}