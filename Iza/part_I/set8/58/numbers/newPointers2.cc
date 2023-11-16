#include "numbers.ih"

int *Numbers::newPointers(size_t cap)
{
    int *ints = new int[cap];
    return ints; 
}