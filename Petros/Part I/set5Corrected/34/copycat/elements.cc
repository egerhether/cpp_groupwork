#include "CopyCat.ih"

size_t CopyCat::elements(char **str)
{
    size_t nrElem = 0;
                                // count elements until we get to null
    while (str[nrElem] != nullptr)
        ++nrElem;

    ++nrElem;                   // the previous loop doesnt count the null
    return nrElem;
}
