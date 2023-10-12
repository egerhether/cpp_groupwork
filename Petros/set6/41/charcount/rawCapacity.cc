#include "charcount.ih"

Char* CharCount::rawCapacity() const
{
    return new Char[d_capacity];
} 
