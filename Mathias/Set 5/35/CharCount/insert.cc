#include "CharCount.ih"

void CharCount::insert(Char*& newPtr, size_t index)
{
    Char* temp = new Char[charInfo.nCharObj + 1];
    for (size_t i = 0; i < index; ++i)
    {
        temp[i] = newPtr[i];
    }
    temp[index] = newPtr[index];
    for (size_t i = index; i < charInfo.nCharObj; ++i)
    {
        temp[i + 1] = newPtr[i];
    }
    delete[] newPtr;
    newPtr = temp;
}