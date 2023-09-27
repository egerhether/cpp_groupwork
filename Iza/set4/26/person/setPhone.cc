#include "person.h"

void Person::setPhone(std::string const &phone)
{
    for (std::string::const_iterator it = phone.begin(); it != phone.end(); ++it)
    {
        if (isalpha(*it))
            return;
    }

    d_phone = phone;
}