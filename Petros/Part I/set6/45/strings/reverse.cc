#include "strings.ih"

void Strings::reverse()
{
    for (size_t idx = 0; idx != d_size / 2; ++idx)
    {
        string tmp = d_str[idx];
        d_str[idx] = d_str[d_size - 1 - idx];
        d_str[d_size - 1 - idx] = tmp; 

    }
}
