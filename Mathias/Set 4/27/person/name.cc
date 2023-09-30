#include "person.ih"
#include <iostream>
#include <string>

string const &Person::name() const
{
    return d_name;
}