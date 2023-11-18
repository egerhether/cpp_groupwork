#include "symtab.ih"

namespace {
    Symbol emptySym;
}

Symbol  &Symtab::safeAt(size_t idx) const
{
    if (idx >= d_size)          // if a symbol that doesn't exist is requested
    {
        return emptySym;
    }

    return *d_symbols[idx];
}
