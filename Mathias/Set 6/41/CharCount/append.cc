#include "CharCount.ih"

void CharCount::append(char ch, size_t index)
{
    d_charInfo.ptr[index].count = 1;  
    d_charInfo.ptr[index].ch = ch;
    ++d_charInfo.nCharObj;
}