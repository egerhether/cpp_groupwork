#include "numbers.ih"

Numbers::Numbers(Numbers const &other)
:
    d_length(other.d_length)
{
    d_ints = newPointers(d_length);

    for (size_t idx = 0; idx !=d_length; ++idx)
        at(idx) = other.d_ints[idx];
}