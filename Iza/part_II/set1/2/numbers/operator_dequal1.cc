#include "numbers.ih"

Numbers &&Numbers::operator/=(int const nr) &&
{
    if (nr != 0)
    {
    for (size_t idx = 0; idx != d_size; ++idx)
        d_nums[idx] = d_nums[idx] / nr; 
    }
    else 
        std::cerr << "division by 0\n";

    return std::move(*this);
}