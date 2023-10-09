#include "CopyCat.ih"

size_t CopyCat::countElements(char **str)
{
    size_t count = 0;
    while (str[count] != nullptr)
        ++count;
    return count;
}
