#include "person.ih"

void Person::insert(ostream& os) const
{
    os << d_name << "," << d_address << "," << d_phone << "," << d_mass;
}