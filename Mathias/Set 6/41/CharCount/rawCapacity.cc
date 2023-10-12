#include "CharCount.ih"

Char *CharCount::rawCapacity()
{
    Char *ptr = static_cast<Char *>(operator new(capacity()*sizeof(Char)));
    return ptr;
}