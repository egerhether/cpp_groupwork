#include "strings.ih"

Strings::Strings(Strings &&tmp)
:
    d_size(std::move(tmp.d_size)),
    d_capacity(std::move(tmp.d_capacity)),
    d_str(std::move(tmp.d_str))
{}