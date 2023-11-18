#include "charcount.ih"

void CharCount::insert(char nextChar, size_t idxPos)
{
    Char *newptr = new Char[d_CharInfo.nCharObj + 1];
    
                                // Copy ptr to new ptr (skip the index idxPos
                                // as this is where we need to add nextChar)
    for (size_t idxCopy = 0; idxCopy != d_CharInfo.nCharObj; ++idxCopy)
    {
        if (idxCopy < idxPos)
            newptr[idxCopy] = d_CharInfo.ptr[idxCopy];
        else if (idxCopy >= idxPos)
            newptr[idxCopy + 1] = d_CharInfo.ptr[idxCopy];
    }

                                // add nextChar to its correct index
    newptr[idxPos].character = nextChar;
    newptr[idxPos].occurences = 1;
    
    delete[] d_CharInfo.ptr;    // clean up memory allocated for ptr
    d_CharInfo.ptr = newptr;    // replace ptr by newptr
    ++d_CharInfo.nCharObj;      // increment obj count
}
