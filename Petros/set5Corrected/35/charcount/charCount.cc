#include "charcount.ih"

void CharCount::charCount() const
{
    for (size_t idx = 0; idx != d_CharInfo.nCharObj; ++idx)
        CharCount::showChar(d_CharInfo.ptr[idx]); //cout info of all characters
}
