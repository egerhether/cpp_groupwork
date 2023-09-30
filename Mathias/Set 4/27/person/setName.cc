#include "person.ih"

void Person::setName(const string& name)
{
    if (name.empty())
        d_name = " - not available -";
    else
        d_name = name;
}
