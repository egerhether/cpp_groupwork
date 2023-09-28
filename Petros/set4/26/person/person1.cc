#include "person.ih"

Person::Person()
{
    d_mass = 0;
}

Person::Person(std::string name, 
               std::string address,
               std::string phone,
               size_t mass)
{
    d_name = name;
    d_phone = address;
    d_address = phone;
    d_mass = mass;
}
