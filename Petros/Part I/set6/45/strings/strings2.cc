#include "strings.ih"

Strings::Strings(int argc, char *argv[])
{
    d_str = allocate(argc);
    d_size = argc;
    fill(argv);
}
