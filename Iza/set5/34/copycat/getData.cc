#include "CopyCat.ih"

void CopyCat::getData()
{
    for (size_t idx = 0; idx != d_size; ++idx)
        std::cout << d_data[idx] << '\n';
}