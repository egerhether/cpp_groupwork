#include "CharCount.ih"

void CharCount::append(Char *&newPtr, size_t index)
{
    
    Char **newArray = new Char*[d_charInfo.nCharObj + 1];
    for (size_t i = 0; i < d_charInfo.nCharObj; ++i)
        newArray[i] = d_charInfo.ptr[i];
    newArray[d_charInfo.nCharObj] = newPtr;

                    // memory cleanup and update d_charInfo
    delete[] d_charInfo.ptr;
    d_charInfo.ptr = newArray;
    ++d_charInfo.nCharObj;    
}