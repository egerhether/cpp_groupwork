#include "person.ih"

void Person::printPerson(Person const &persn) const
{
    cout << "name       : " << persn.d_name << '\n';
    cout << "address    : " << persn.d_address << '\n';
    cout << "phone      : " << persn.d_phone << '\n';
    cout << "mass       : " << persn.d_mass << '\n';
}
