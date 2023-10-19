#include "CopyCat.ih"

CopyCat::CopyCat(char **data)
{
    d_size = elements(data);
    d_data = new char*[d_size];
                            
                                // copy data to d_data
    for (size_t idx = 0; idx != d_size; ++idx)
        copyString(d_data[idx], data[idx]);
}
