#include "CopyCat.ih"

CopyCat::CopyCat()
{
    char** environCopy = environ;
    d_size = elements(environCopy);
    d_data = new char*[d_size];

    for (size_t idx = 0; idx != d_size; ++idx)
        copyString(d_data[idx],environCopy[idx]);