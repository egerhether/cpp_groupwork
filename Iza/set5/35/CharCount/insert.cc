#include "CharCount.ih"

void CharCount::insert(Char *&newPtr, size_t index)
{
    Char **newArray = new Char*[d_charInfo.nCharObj + 1];
    for (size_t i = 0; i < index; ++i)
        newArray[i] = d_charInfo.ptr[i];
    newArray[index] = newPtr;
    for (size_t i = index; i < d_charInfo.nCharObj; ++i)
        newArray[i + 1] = d_charInfo.ptr[i];

                    // memory cleanup and update d_charInfo
    delete[] d_charInfo.ptr;
    d_charInfo.ptr = newArray;
    ++d_charInfo.nCharObj;
}