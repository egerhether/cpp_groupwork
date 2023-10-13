#include "strings.ih"

void Strings::destroy()
{
    for (size_t idx = d_size; idx--; )
        delete d_str[idx];
    delete[] d_str;

    d_str = nullptr;
}