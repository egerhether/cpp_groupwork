#include "charcount.ih"

void CharCount::append(char nextChar)
{   
    if (d_CharInfo.nCharObj >= d_capacity)
        enlarge();
    
    d_CharInfo.ptr[d_CharInfo.nCharObj].character = nextChar;
    d_CharInfo.ptr[d_CharInfo.nCharObj].occurences = 1;
    
    ++d_CharInfo.nCharObj;      // increment obj count
}
