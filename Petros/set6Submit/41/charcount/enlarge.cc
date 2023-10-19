#include "charcount.ih"

void CharCount::enlarge()
{
    d_capacity *= 2;
    Char *newptr = rawCapacity();
                                
                                // Copy ptr to new ptr
    for (size_t idx = 0; idx != d_CharInfo.nCharObj; ++idx)
        newptr[idx] = d_CharInfo.ptr[idx];

    delete[] d_CharInfo.ptr;    // clean up memory allocated for ptr
    d_CharInfo.ptr = newptr;    // replace ptr by newptr
}

 


