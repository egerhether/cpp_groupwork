#include "symtab.ih"

void Symtab::enlarge(size_t newCap)
{
                        // we only need to enlarge, so if newCap <= d_capacity
    if (newCap <= d_capacity)
        return;                 // do nothing

    Symbol **tmp = new Symbol *[newCap];
    
                                // copy symbols to tmp
    for (size_t idx = 0; idx != d_size; ++idx)
        tmp[idx] = d_symbols[idx];

    delete[] d_symbols;         // free up data

    d_symbols = tmp;            // update d_symbols
    d_capacity = newCap;        // update d_capacity
}
