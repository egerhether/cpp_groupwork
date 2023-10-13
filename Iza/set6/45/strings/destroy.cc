#include "strings.ih"

void Strings::destroy()
{
    for (size_t idx = d_size; idx--; )
        d_str[idx].~string();
    delete[] d_str;

    d_str = nullptr;
}