#include "CopyCat.ih"

void CopyCat::copyString(char *dest, char *src) 
{
    size_t length = elements(&src);
        
    dest = new char[length + 1];
        
    for (size_t idx = 0; idx <= length; ++idx) 
        dest[idx] = src[idx];
}
