#include "charcount.ih"

void CharCount::append(char nextChar)
{ 
    Char *newptr = new Char[d_CharInfo.nCharObj + 1];
   
                                // Copy ptr to new ptr
    for (size_t idx = 0; idx != d_CharInfo.nCharObj; ++idx)
        newptr[idx] = d_CharInfo.ptr[idx];

    
    newptr[d_CharInfo.nCharObj].character = nextChar;
    newptr[d_CharInfo.nCharObj].occurences = 1;
    

    delete[] d_CharInfo.ptr;    // clean up memory allocated for ptr
    d_CharInfo.ptr = newptr;    // replace ptr by newptr
    ++d_CharInfo.nCharObj;      // increment obj count
}
