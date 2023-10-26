#include "strings.ih"

void Strings::iterate(char **environLike)
{
    for (size_t idx = 0; idx != d_iter; ++idx)
        add(environLike[idx]);
}