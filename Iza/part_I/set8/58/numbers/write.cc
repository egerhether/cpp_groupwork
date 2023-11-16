#include "numbers.ih"

void Numbers::write(ostream &stream)
{
    for (size_t idx = 0; idx != d_length; ++idx)
        stream << at(idx) << '\n';
}