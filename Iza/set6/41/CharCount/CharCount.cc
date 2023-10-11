#include "CharCount.ih"

CharCount::CharCount()
{
    d_charInfo.ptr = new Char[8 * sizeof(Char)];
    d_charInfo.nCharObj = 0;
    d_capacity = 8 * sizeof(Char);
}