#include "strings.ih"

Strings::Strings(int argc, char *argv[])
:
    d_size(argc),
    d_capacity(d_size)
{
    d_str = rawMemory(d_capacity);
    fill(argv);
}
