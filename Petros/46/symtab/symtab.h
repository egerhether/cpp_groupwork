#ifndef INCLUDED_SYMTAB_
#define INCLUDED_SYMTAB_


class Symtab
{
    Symbol **d_symbols;
    size_t d_size;
    size_t d_capacity = 8;

    public:
        Symtab();
        ~Symtab();

    find(std::string identifier)                const;
    size_t idxfind(std::string identifier)      const;
    size_t size()                               const;
    
    Symbol const &at(index)                     const;
    Symbol &at(index);

    private:
    
    // for allocation
    
    void add();
    void enlarge();
    void destroy();

    // for find

    void insert(Symbol nextSym, size_t idx);
    void append(Symbol nextSym, size_t idx);
};
        
#endif
