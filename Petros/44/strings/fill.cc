#include "strings.ih"

void Strings::fill(char *ntbs[])
{
    for (size_t index = 0; index != d_size; ++index)
    {
        string tmp = ntbs[index];
        d_str[index] = new string(tmp);
    }
}
