#include "symtab.ih"

void Symtab::insert(string const &nextSym, int idx)
{
    if (d_size == d_capacity)
        enlarge(d_capacity * 2);

    for (int idxCopy = d_size; idxCopy != 0; idxCopy--)
        if (idxCopy > idx)
        {
            d_symbols[idxCopy] = d_symbols[idxCopy - 1];
            d_symbols[idxCopy]->assign(Value(idxCopy));
        }

    d_symbols[idx] = new Symbol(nextSym, idx);
    ++d_size;
}
