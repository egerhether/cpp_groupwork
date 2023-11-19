#include "strings.ih"

Strings::Strings(char **environLike)
:
    d_sep("\n"),
    d_manip(&stdInsertion)
{
    while (*environLike)
        add(*environLike++);
}
