#include "numbers.ih"

Numbers &&Numbers::operator*=(int const nr) &&
{
    for (size_t idx = 0; idx != d_size; ++idx)
        d_nums[idx] = d_nums[idx] * nr; 

    return std::move(*this);
}