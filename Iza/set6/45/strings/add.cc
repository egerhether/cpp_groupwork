#include "strings.ih"

void Strings::add(string const &next)
{
    if (d_size >= d_capacity) // make room for the next string,
    {
        d_capacity = 2 * d_capacity;
        reserve(d_capacity);    
    }      

    d_str[d_size] = string(next);                 // store next
    ++d_size;                              // update  d_size
}
