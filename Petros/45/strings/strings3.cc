#include "strings.ih"

Strings::Strings(char *environLike[])
{
    size_t size = count(environLike);
    d_str = allocate(size);
    d_size = size;
    fill(environLike);
}
