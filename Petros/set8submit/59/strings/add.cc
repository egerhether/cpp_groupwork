#include "strings.ih"

void Strings::add(string const &next)
{
    string *(*chosenEnlarge)(string *, size_t) = enlarge();
                                        // make room for the next string,
    string *tmp = (*chosenEnlarge)(d_str, d_size);
                                        // tmp is the new string *

    tmp[d_size] = next;
    
                   // store next

    delete[] d_str;                     // return old memory

    d_str = tmp;                        // update d_str and d_size
    ++d_size;
}
