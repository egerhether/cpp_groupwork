#include "numbers.ih"

bool operator==(Numbers &&tmp, Numbers const &rhs)
{
    return tmp == rhs;
}