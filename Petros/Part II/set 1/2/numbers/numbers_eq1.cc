#include "numbers.ih"

bool operator==(Numbers const &lhs, Numbers const &rhs)
{
    if (lhs.d_size == rhs.d_size)   // if same szize check pairs
    {
        for (size_t idx = 0; idx != lhs.d_size; ++idx)
        {
            if (lhs[idx] != rhs[idx])
                return false;       // if one pair is diff not equal
        }
        return true;                // checked all pairs, equal
    }
    
    return false;                   // diff size
}
