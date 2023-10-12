#include "strings.ih"

// Destructor definition
Strings::~Strings()
{
    delete[] d_str;  // Release the dynamically allocated memory
}
