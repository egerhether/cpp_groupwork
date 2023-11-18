#include "charcount.ih"

CharCount::Char* CharCount::rawCapacity() const
{
    return new Char[d_capacity];
} 
