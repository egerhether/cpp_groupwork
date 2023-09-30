#include "person.ih"

void Person::extract(istream& is)
{
    getline(is, d_name, ',');
    getline(is, d_address, ',');
    getline(is, d_phone, ',');
    is >> d_mass;
}