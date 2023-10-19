#include "strings.ih"

Strings::Strings(istream &in)
:
    d_size(0),
    d_capacity(1),
    d_str(new string*[d_capacity])
{
    string line;
    while (getline(in, line))
        add(line);
}
