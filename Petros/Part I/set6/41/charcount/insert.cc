#include "charcount.ih"

void CharCount::insert(char nextChar, size_t idxPos)
{
    if (d_CharInfo.nCharObj >= d_capacity)
        enlarge();
    
                                // Make space to insert element
    for (size_t idxCopy = d_CharInfo.nCharObj; idxCopy != 0; idxCopy--)
    {
        if (idxCopy > idxPos)
            d_CharInfo.ptr[idxCopy] = d_CharInfo.ptr[idxCopy - 1];
    }

    
    d_CharInfo.ptr[idxPos].character = nextChar;
    d_CharInfo.ptr[idxPos].occurences = 1;
    
    ++d_CharInfo.nCharObj;      // increment obj count
}
