#include "CharCount.ih"

void CharCount::enlarge()
{
    d_capacity = d_capacity * 2;
    Char *tmp = rawCapacity();
    for (size_t idx = d_charInfo.nCharObj; idx--; )
        new(tmp + idx) Char{ d_charInfo.ptr[idx] };
    
    destroy();
    d_charInfo.ptr = tmp;
}