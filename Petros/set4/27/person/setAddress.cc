#include "person.ih"

void Person::setAddress(string const &address)
{
    if (address.find('@',0) == string::npos)
        cout << "This email address is not valid\n";
    else
        d_address = address;
}
