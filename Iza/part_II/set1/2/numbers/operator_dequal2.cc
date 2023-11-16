#include "numbers.ih"

Numbers &Numbers::operator/=(int const nr) &
{
    Numbers tmp{*this};
    return *this = std::move(tmp) /= nr;
}