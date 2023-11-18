#include "person.ih"

void Person::setPhone(string const &phone)
{
    if(phone.empty())
        d_phone = " - not available - ";
    else if (Person::hasOnly("0123456789", phone))  // check if phone is valid
        d_phone = phone;                // update the object's data
    else
        cout << "A phone number may only contain digits\n Try again\n";
}
