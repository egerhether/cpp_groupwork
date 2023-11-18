#include "charcount.ih"

void CharCount::locate(char nextChar)
{
    for (size_t idx = 0; idx != d_CharInfo.nCharObj; ++idx)
    {
        if (d_CharInfo.ptr[idx].character == nextChar)
        {
            ++d_CharInfo.ptr[idx].occurences;
            return;
        }
        if (d_CharInfo.ptr[idx].character > nextChar)
        {
            insert(nextChar, idx);
            return;
        }        
    }
    insert(nextChar, d_CharInfo.nCharObj);
}
