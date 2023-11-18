#include "CopyCat.ih"

CopyCat::CopyCat()
{
    d_size = elements(environ);
    d_data = new char *[d_size];
    
                                // copy environ to d_data 
    for (size_t idx = 0; idx != d_size; ++idx)
        copyString(d_data[idx],environ[idx]);
}
