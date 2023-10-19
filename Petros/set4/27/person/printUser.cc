#include "person.ih"

void Person::printPerson(Person const &p) const
{
    cout << "name       : " << p.d_name << '\n';
    cout << "address    : " << p.d_address << '\n';
    cout << "phone      : " << p.d_phone << '\n';
    cout << "mass       : " << p.d_mass << '\n';
}
