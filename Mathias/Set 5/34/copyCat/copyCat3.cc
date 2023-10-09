#include "copyCat.ih"

CopyCat::CopyCat(char **data)
{
    d_size = countElements(data);               // count the elements
    d_data = new char*[d_size];                 // allocate memory

    for (size_t ix = 0; ix != d_size; ++ix) 
        d_data[ix] = strdup(data[ix]);          // duplicate the string
}