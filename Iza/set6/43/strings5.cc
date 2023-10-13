#include "strings.ih"

Strings::~Strings()
{
    delete[] d_str;
    d_size = 0;
}