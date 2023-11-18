#include "numbers.ih"

void Numbers::swap(Numbers &other)
{
    std::swap(d_length, other.d_length);
    std::swap(d_ints, other.d_ints);
}