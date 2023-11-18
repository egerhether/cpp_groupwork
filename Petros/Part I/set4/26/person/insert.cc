#include "person.ih"

void Person::insert(ostream &data) const
{
                            // insert using the << operator to data ostream
    data << "name       : " << d_name << '\n';
    data << "address    : " << d_address << '\n';
    data << "phone      : " << d_phone << '\n';
    data << "mass       : " << to_string(d_mass) << '\n';
}
