#include "symtab.ih"

Symbol const &Symtab::find(string identifier)
{
                                // idxfind() does all the finding.
                                // we just return the symbol at the index
                                // which idxfind makes sure exists and is
                                // correct
    return *d_symbols[idxfind(identifier)];
}
