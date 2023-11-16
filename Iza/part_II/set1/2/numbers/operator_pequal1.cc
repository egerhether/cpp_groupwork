#include "numbers.ih"

Numbers &&Numbers::operator+=(Numbers const &other) &&
{
    if (d_size == other.d_size)
    {
    for (size_t idx = 0; idx != d_size; ++idx)
        d_nums[idx] = d_nums[idx] + other[idx]; 
    }
    else
        std::cerr << "different sizes of Numbers object encountered when"
                  << "trying to perform addition\n";

    return std::move(*this);
}