#include "charcount.ih"

CharCount::Action CharCount::locate(char nextChar, size_t *idx) const
{
    for (size_t idxLoc = 0; idxLoc != d_CharInfo.nCharObj; ++idxLoc)
    {
        if (d_CharInfo.ptr[idxLoc].character == nextChar)
        {
            *idx = idxLoc;
            return INC;
        }
        if (d_CharInfo.ptr[idxLoc].character > nextChar)
        {
            *idx = idxLoc;
            return INSERT;
        }

    }
    return APPEND;
}
