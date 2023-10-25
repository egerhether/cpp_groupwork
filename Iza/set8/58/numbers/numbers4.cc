#include "numbers.ih"

Numbers::Numbers(Numbers &&tmp)
:
    d_length(std::move(tmp.d_length)),
    d_ints(std::move(tmp.d_ints))
{}