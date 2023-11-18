#include "strings.ih"

Strings &Strings::operator=(Strings const &other)
{
    Strings tmp(other);
    swap(tmp);
    return *this;
}