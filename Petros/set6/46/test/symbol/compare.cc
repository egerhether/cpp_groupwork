#include "symbol.ih"

Symbol::Compare Symbol::compare(std::string identifier) const
{
    if (d_name < identifier)
        return LHS_FIRST;
    if (d_name == identifier)
        return EQUAL;

    //else implied by the returns in the if statements
    return RHS_FIRST;
}
