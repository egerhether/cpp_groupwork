#include "strings.ih"

string *Strings::rawMemory(size_t cap)
{
    string *mem = static_cast<string *>(operator new(cap * sizeof(string)));

        // Construct string objects in the allocated memory
    for (size_t i = 0; i != cap; ++i) {
        new (&mem[i]) string;
    }

    return mem;
}