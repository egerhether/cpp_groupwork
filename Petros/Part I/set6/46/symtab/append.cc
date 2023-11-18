#include "symtab.ih"

void Symtab::append(string const &nextSym)
{
    if (d_size == d_capacity)
        enlarge(d_capacity * 2);
    
    d_symbols[d_size] = new Symbol(nextSym, int(d_size));
    ++d_size;
}
