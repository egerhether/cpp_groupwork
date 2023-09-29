#include "fibonacci.ih"

size_t rawfib(size_t value)
{
    if (value <= 2)
     return 1;
        // direct application of fibonacci sequence
    size_t fibNr = rawfib(value - 1) + rawfib(value - 2);

    return fibNr;
}