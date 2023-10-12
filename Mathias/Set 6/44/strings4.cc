#include "strings.ih"

Strings::Strings(istream &in)
    : d_size(0),
      d_capacity(1),
      d_str(new std::string*[d_capacity])
{
    d_str[0] = new std::string();

    string line;
    while (getline(in, line))
        add(line);
}
