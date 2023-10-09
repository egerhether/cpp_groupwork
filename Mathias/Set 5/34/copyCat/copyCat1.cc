#include "CopyCat.ih"

// Default constructor implementation
CopyCat::CopyCat()
{
    char** copy = environ;      // Copy the pointer
    d_size = countElements(copy); // Count the elements
    d_data = new char*[d_size]; // Allocate memory

    for (size_t ix = 0; ix != d_size; ++ix) 
    {
        // Use strdup to duplicate the string
        d_data[ix] = strdup(copy[ix]);
    }
}