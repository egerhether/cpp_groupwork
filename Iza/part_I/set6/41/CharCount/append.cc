#include "CharCount.ih"

void CharCount::append(char c, size_t index)
{
    d_charInfo.ptr[index].ch = c;
    d_charInfo.ptr[index].count = 1;  
    ++d_charInfo.nCharObj;
}