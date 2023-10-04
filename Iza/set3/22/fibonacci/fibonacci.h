#ifndef FINDCASE_H_
#define FINDCASE_H_

#include <iostream>

size_t fib(size_t value);
size_t rawfib(size_t value);

namespace 
{
    int const MAXFIB = 90;
    int const ENDFIB = MAXFIB + 1;
    size_t fibval[ENDFIB] = {};
};

#endif