#include "symtab.ih"

Symtab::Symtab()
    d_symbols(new Symbol *[d_capacity])   // default = 8
{}
