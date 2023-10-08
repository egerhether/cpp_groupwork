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

        if (d_charInfo.nCharObj == 0)
        {
                                // allocate memory for the first Char object
            d_charInfo.ptr = new Char*[1];
            d_charInfo.ptr[0] = newPtr;
            d_charInfo.nCharObj = 1;
        }

        switch (action)
        {
            case APPEND:
            {
                Char **newArray = new Char*[d_charInfo.nCharObj + 1];
                for (size_t i = 0; i < d_charInfo.nCharObj; ++i)
                    newArray[i] = d_charInfo.ptr[i];
                newArray[d_charInfo.nCharObj] = newPtr;

                                 // memory cleanup and update d_charInfo
                delete[] d_charInfo.ptr;
                d_charInfo.ptr = newArray;
                ++d_charInfo.nCharObj;
                break;
            }

            case INSERT:
            {
                Char **newArray = new Char*[d_charInfo.nCharObj + 1];
                for (size_t i = 0; i < index; ++i)
                    newArray[i] = d_charInfo.ptr[i];
                newArray[index] = newPtr;
                for (size_t i = index; i < d_charInfo.nCharObj; ++i)
                    newArray[i + 1] = d_charInfo.ptr[i];

                                    // memory cleanup and update d_charInfo
                delete[] d_charInfo.ptr;
                d_charInfo.ptr = newArray;
                ++d_charInfo.nCharObj;
                break;
            }

            case INC:
                ++d_charInfo.ptr[index]->count;
                delete newPtr;
                break;
        }
    }
}