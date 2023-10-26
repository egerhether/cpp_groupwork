#include "strings.ih"

Strings::Strings(size_t nIterate, bool copy)
:
    d_size(0),
    d_str(0),
    d_copy(copy),
    d_iter(nIterate)
{}