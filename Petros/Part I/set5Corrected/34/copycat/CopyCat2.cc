#include "CopyCat.ih"

CopyCat::CopyCat(int argc, char **argv)
{
    d_size = static_cast<size_t>(argc);
    d_data = new char*[d_size];
                               
                                // copy argv to d_data             
    for (size_t idx = 0; idx != d_size; ++idx)  
        copyString(d_data[idx], argv[idx]);
}
