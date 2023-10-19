#include "charcount.ih"

CharCount::~CharCount()
{
    delete[] d_CharInfo.ptr;
}
