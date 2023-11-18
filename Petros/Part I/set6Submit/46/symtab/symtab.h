#ifndef INCLUDED_SYMTAB_
#define INCLUDED_SYMTAB_

#include "../symbol/symbol.h"

class Symtab
{
    size_t d_capacity = 8;      // initial cap is 8
    Symbol **d_symbols;
    size_t d_size = 0;

    public:
        Symtab();
        ~Symtab();

        Symbol const &find(std::string const &identifier)    ;
        size_t idxfind(std::string const &identifier)        ;
        size_t size()                                   const;
        
        Symbol const &at(size_t index)                  const;
        Symbol &at(size_t index);

    private:

        Symbol &safeAt(size_t index)    const;
        
        // for allocation
        
        void enlarge(size_t newCap);    // enlarges the d_symbols array to newCap
        void destroy();                 // deletes allocated memory

        // for find
        void insert(std::string const &nextSym, int idx);
};

// INLINE FUNCTIONS
// size()
inline size_t Symtab::size() const
{
    return d_size;
}

//at()
inline Symbol const &Symtab::at(size_t index) const
{
    return safeAt(index);
}

inline Symbol &Symtab::at(size_t index)
{
    return safeAt(index);
}
#endif
