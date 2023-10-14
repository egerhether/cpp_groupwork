#include "strings.ih"

void Strings::add(string const &next)
{
    string **tmp;
    if (d_size == d_capacity)
    {
        tmp = enlarge();                    // make room for the next string,
        delete[] d_str;                     // return old memory
        d_str = tmp;                        // update d_str and d_size
    }

                                          // tmp is the new string *
    d_str[d_size] = new string(next);     // store next
    ++d_size;
}
