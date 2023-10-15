#include "strings.ih"

void Strings::fill(char *ntbs[])
{
    for (size_t index = 0; index != d_size; ++index)
        new(d_str + index) string(ntbs[index]);
}
