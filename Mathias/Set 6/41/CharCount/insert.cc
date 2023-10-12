#include "CharCount.ih"

void CharCount::insert(char c, size_t index)
{
    for (size_t ix = d_charInfo.nCharObj-1; ix != index; ix--)
        d_charInfo.ptr[ix] = d_charInfo.ptr[ix - 1];

    d_charInfo.ptr[index].ch = c;
    d_charInfo.ptr[index].count = 1;  
    ++d_charInfo.nCharObj;
}
