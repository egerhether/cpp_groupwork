#include "numbers.ih"

Numbers::Numbers(size_t count, int value)
:
    d_length(count)
{
    d_ints = newPointers(d_length, value);
}