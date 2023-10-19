#include "strings.ih"

void Strings::destruct()
{
    delete[] d_str;
}
