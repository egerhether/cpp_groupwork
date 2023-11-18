#include "strings.ih"

Strings::Strings(size_t nIterate, bool copy)
:
    d_size(0),
    d_str(0),
    d_iter(nIterate),
    d_copy(copy)
{}