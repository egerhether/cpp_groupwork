#include "CharCount.ih"

void CharCount::destroy()
{   
    for (size_t idx = d_charInfo.nCharObj; idx--; )
        d_charInfo.ptr[idx].~Char();
    operator delete(d_charInfo.ptr);
}
