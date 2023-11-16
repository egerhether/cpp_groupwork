#include "numbers.ih"

bool operator==(Numbers const &lhs, Numbers const &rhs)
{
    if (lhs.d_size == rhs.d_size)
    {
        for (size_t idx = 0; idx != lhs.d_size; ++idx)
        {
            if (lhs[idx] != rhs[idx])
                return false;
        }
        return true;
    }
    else 
        return false;
}