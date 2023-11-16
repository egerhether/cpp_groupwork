#include "numbers.ih"

Numbers operator*(Numbers &lhs, int const nr)
{
    Numbers copy(lhs);
    return std::move(copy) * nr;
}