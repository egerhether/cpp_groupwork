#include "person.ih"

void Person::setAddress(const string& address)
{
    if (address.empty())
        d_address = " - not available -";
    else
        d_address = address;
}
