#include "strings.ih"

Strings::Strings(istream &in)
:
    d_size(0)
{
    d_str = allocate(Strings::CAPACITY);
    string line;
    while (getline(in, line))
        add(line);
}
