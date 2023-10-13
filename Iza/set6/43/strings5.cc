#include "strings.ih"

strings::~Strings()
{
    delete[] str;
    size = 0;
}