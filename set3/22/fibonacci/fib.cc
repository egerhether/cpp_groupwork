#include "fibonacci.ih"

namespace 
{
    int const MAXFIB = 90;
    int const ENDFIB = MAXFIB + 1;
    size_t fibval[ENDFIB] = {};
};

size_t fib(size_t value)
{
    if (value <= 2) // base case
    {
        fibval[value] = 1; // compute first steps of fibval
        return 1;
    }
                        // if desired number computed, output it, if not
                        // check if previous number is computed, else 
                        // compute it
    fibval[value] = fibval[value] != 0 ? fibval[value] :
            fibval[value - 1] != 0 ? fibval[value - 1] + fibval[value - 2] :
            fib(value - 1) + fib(value - 2);


    return fibval[value]; 
}