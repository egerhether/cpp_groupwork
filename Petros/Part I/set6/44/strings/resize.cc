#include "strings.ih"

void Strings::resize(size_t newCap)
{
    if (d_capacity == newCap)           // if we enlarge to the same size
        return;                         // do nothing

    size_t oldSize = d_size;
    bool enlarge = d_size < newCap;
    string *tmp = allocate(newCap);

    if (!enlarge)                               // if we make smaller
        for (size_t idx = newCap - 1; idx != oldSize; ++idx)
            (d_str + idx)->~string();           // delete excess strings
    operator delete(d_str);                     // return old memory
    

    d_capacity = newCap;                        // update capacity
    d_str = tmp;                                // update d_str and d_size
}
