#include "symtab.ih"

size_t Symtab::idxfind(std::string identifier)
{
    if (d_size == 0)
    {
        append(identifier);
        return 0;
    }

                                        // initializing indices begin and end
    size_t begin = 0;
    size_t end = d_size;
    
    while (begin != end)
    {   
                                        // get the midpoint of begin and end
        size_t midpoint = (begin + end) / 2;

                                        // compare the symbol at idx midpoint
                                        // to the identifier passed using the
                                        // compare() member function of Symbol
        switch (d_symbols[midpoint]->compare(identifier))
        {
        case Symbol::EQUAL:              // if equal then return idx = midpoint
            return midpoint;
            
        case Symbol::LHS_FIRST:          // restrict our range to the right half
            if (begin == midpoint)
                ++midpoint;
            begin = midpoint;
        break;

        case Symbol::RHS_FIRST:         // restrict to left half
            if (end == midpoint)
                --midpoint;
            end = midpoint;
        break;
        
        }    
    }

    if (begin == d_size)        // begin == end == d_size
        append(identifier);
    
    else
        insert(identifier, begin);
    
    return begin;
}
