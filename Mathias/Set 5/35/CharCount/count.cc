#include "CharCount.ih"

void CharCount::count(std::istream &stream)
{
    char c;
    while (stream.get(c))
    {
        size_t idx;
        Action action = locate(c, idx);
        if (action == INC)
            charInfo.ptr[idx].count++;
        else if (action == INSERT)
        {
            insert(charInfo.ptr, idx);
            charInfo.nCharObj++;
            charInfo.ptr[idx].ch = c;
            charInfo.ptr[idx].count = 1;
        }
        else if (action == APPEND)
        {
            append(charInfo.ptr, charInfo.nCharObj);
            charInfo.nCharObj++;
            charInfo.ptr[charInfo.nCharObj - 1].ch = c;
            charInfo.ptr[charInfo.nCharObj - 1].count = 1;
        }
    }
}