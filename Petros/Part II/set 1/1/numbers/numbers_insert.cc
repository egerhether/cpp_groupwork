#include "numbers.ih"

std::ostream operator<<(std::ostream out, Numbers const &nums)
{
    for (size_t idx = 0; idx != nums.d_size; ++idx)
    {
        out << nums[idx] << ' ';
    }

    return out;
}
