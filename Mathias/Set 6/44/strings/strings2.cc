#include "strings.ih"

Strings::Strings(int argc, char *argv[])
    : d_size(argc),
      d_capacity(argc),
      d_str(new std::string*[argc])
{
    for (size_t i = 0; i < argc; ++i)
    {
        d_str[i] = new std::string();
    }
    fill(argv);
}
