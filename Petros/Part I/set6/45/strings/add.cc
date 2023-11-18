#include "strings.ih"

void Strings::add(string const &next)
{
    if (d_size == d_capacity)
    {
        d_capacity *= 2;
        string *tmp = allocate(d_capacity);
        destroy();
        d_str = tmp;
    }
    new(d_str + d_size) string(next);  // store next
    ++d_size;
}
