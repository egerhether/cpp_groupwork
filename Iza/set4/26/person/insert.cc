#include "person.h"

void Person::insert(std::ostream &ostream)
{
    ostream << d_name << d_address << d_phone << std::to_string(d_mass);
}