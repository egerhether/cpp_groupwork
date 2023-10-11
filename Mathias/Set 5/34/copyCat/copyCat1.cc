#include "CopyCat.ih"

// Default constructor implementation
CopyCat::CopyCat()
{
    char** copy = environ;      // copy pointer
    d_size = countElements(copy); // count the elements
    d_data = new char*[d_size]; // allocate memory

    for (size_t ix = 0; ix != d_size; ++ix) 
    {
        // duplicate the string
        d_data[ix] = strdup(copy[ix]);
    }
}