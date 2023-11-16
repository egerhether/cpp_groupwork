#include "CharCount.ih"

CharCount::Action CharCount::locate(char c, size_t &index)
{
    for (size_t idx = 0; idx != d_charInfo.nCharObj; ++idx)
    {
        if (d_charInfo.ptr[idx]->ch == c)
        {
            index = idx;
            return INC;
        }
        if (d_charInfo.ptr[idx]->ch > c)
        {
            index = idx;
            return INSERT;
        }
    }
    return APPEND;
}