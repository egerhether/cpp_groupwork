#include "CopyCat.ih"

CopyCat::CopyCat(int argc, char **argv)
{
    d_size = static_cast<size_t>(argc);
    d_data = new char*[d_size];

    for (size_t ix = 0; ix != d_size; ++ix)
    {
        d_data[ix] = strdup(argv[ix]);
    }
}
