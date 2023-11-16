#include "strings.ih"

// static
size_t Strings::count(char *environLike[])
{
    char **ptr = environLike;

    while (*ptr++)      // find the 0-pointer
        ;

                        // ptr just passed beyond the 0-ptr
    return  (ptr - 1) - environLike;
}
