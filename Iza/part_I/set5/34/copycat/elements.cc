#include "CopyCat.ih"

size_t CopyCat::elements(char **str)
{
    size_t nrElem = 0;
    while (str[nrElem] != nullptr)
        ++nrElem;

    return nrElem;
}