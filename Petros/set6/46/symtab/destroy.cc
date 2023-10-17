#include "symtab.ih"

void Symtab::destroy()
{
   for (size_t idx = 0; idx != d_size; ++idx)
       d_symbols[idx]->~Symbol();

   delete[] d_symbols;
}
