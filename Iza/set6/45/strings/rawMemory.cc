#include "strings.ih"

string *Strings::rawMemory(size_t cap)
{
    string *mem = static_cast<string *>(operator new(sizeof(string) * d_size));
    return mem;
}