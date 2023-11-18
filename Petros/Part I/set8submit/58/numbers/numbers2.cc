#include "numbers.ih"

Numbers::Numbers(size_t count)
:
    d_length(count)
{
    d_ints = newPointers(d_length);
}