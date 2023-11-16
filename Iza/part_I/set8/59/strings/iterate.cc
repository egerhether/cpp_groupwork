#include "strings.ih"

void Strings::iterate(char **environLike)
{
    delete[] d_str;
    for (size_t idx = 0; idx != d_iter; ++idx)
        add(environLike[idx]);
}