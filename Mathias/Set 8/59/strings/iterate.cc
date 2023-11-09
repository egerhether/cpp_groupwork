#include "strings.ih"

void Strings::iterate(char **environLike)
{
    for (size_t ix = 0; ix != d_iter; ++ix)
        add(environLike[ix]);
    delete[] d_str;
}