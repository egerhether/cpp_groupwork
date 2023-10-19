#include "symtab.ih"

void Symtab::insert(string const &nextSym, size_t idx)
{
    if (d_size == d_capacity)
        enlarge(d_capacity * 2);

    for (size_t idxCopy = d_size; idxCopy != 0; idxCopy--)
        if (idxCopy > idx)
        {
            d_symbols[idxCopy] = d_symbols[idxCopy - 1];
            d_symbols[idxCopy]->assign(Value(int(idxCopy)));
        }

    d_symbols[idx] = new Symbol(nextSym, int(idx));
    ++d_size;
}
