#include "numbers.ih"

Numbers operator+(Numbers &lhs, Numbers &rhs)
{
    Numbers copy(lhs);
    return std::move(copy) + rhs;
}