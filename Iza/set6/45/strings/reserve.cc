#include "strings.ih"

void Strings::reserve(size_t cap)
{
    string *tmp = rawMemory(cap);  // allocate cap memory

    for (size_t idx = 0; idx != d_size; ++idx)  // copy existing strings
        new (tmp + (idx * sizeof(string))) string(at(idx));
    
    if (d_str)
        destroy();
    
    d_str = tmp;
    


}
