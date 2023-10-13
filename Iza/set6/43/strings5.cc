#include "strings.ih"

Strings::~Strings()
{
    delete[] str;
    size = 0;
}