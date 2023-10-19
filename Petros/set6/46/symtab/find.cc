#include "symtab.ih"

Symbol const &Symtab::find(string const &identifier)
{
                                // idxfind() does all the finding.
                                // we just return the symbol at the index
                                // which idxfind makes sure exists and is
                                // correct
    return safeAt(idxfind(identifier));
}
