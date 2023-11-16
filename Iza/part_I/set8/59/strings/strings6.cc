#include "strings.ih"

Strings::~Strings()
{
    delete[] d_str;
}