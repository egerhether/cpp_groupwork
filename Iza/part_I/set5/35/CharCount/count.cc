#include "CharCount.ih"

void CharCount::count(std::istream &stream)
{
    char c;

    while(stream.get(c)) // while there's another character
    {        
        size_t index;
        Action action = locate(c, index);
        Char *newPtr = nullptr;
        newPtr = new Char;
        newPtr->ch = c;
        newPtr->count = 1;

        switch (action)
        {
            case APPEND:
                append(newPtr,index);
                break;

            case INSERT:
                insert(newPtr,index);
                break;

            case INC:
                ++d_charInfo.ptr[index]->count;
                delete newPtr;
                break;
        }
    }
}