#include "symtab.ih"

Symtab::Symtab()
:
    d_capacity(),   // default = 8
    d_symbols(new Symbol *[d_capacity])
{}
