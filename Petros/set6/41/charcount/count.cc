#include "charcount.ih"

void CharCount::count(istream &input)
{
    char nextChar;

    while (input.get(nextChar))
    {
        size_t idx;
        Action action = locate(nextChar, &idx);
        switch (action)
        {
            case APPEND:
                append(nextChar);
                break;
                
            case INSERT:
                insert(nextChar, idx);
                break;

            case INC:
                ++d_CharInfo.ptr[idx].occurences;
                break;
        }

    }
}
