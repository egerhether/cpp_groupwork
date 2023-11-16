#include "numbers.ih"

int *Numbers::newPointers(size_t cap, int value)
{
    int *ints = new int[cap];

    for (size_t idx = 0; idx != cap; ++idx)
        ints[idx] = value;
        
    return ints; 
}