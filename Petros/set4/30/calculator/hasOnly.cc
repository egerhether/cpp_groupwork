#include "calculator.ih"

bool calculator::hasOnly(char const *characters, string const &object)
{
    return object.find_first_not_of(characters) == string::npos;
}
