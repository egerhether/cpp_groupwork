#include "strings.ih"

void Strings::add(string const &next)
{
    if (d_size == d_capacity)
        resize(2 * d_capacity);           // make room for the next string,

                                          // tmp is the new string *
    d_str[d_size] = new string(next);     // store next
    ++d_size;
}
