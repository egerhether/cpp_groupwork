#include "CharCount.ih"

void CharCount::insert(char c, size_t index)
{
    for (size_t idx = d_charInfo.nCharObj-1; idx != index; --idx)
        d_charInfo.ptr[idx] = d_charInfo.ptr[idx - 1];

    d_charInfo.ptr[index].ch = c;
    d_charInfo.ptr[index].count = 1;  
    ++d_charInfo.nCharObj;
}
