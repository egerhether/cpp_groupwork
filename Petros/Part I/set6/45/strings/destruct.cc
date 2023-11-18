#include "strings.ih"

void Strings::destroy()
{
    for (string *end = d_str + d_size; end-- != d_str; )
        end->~string();
    operator delete(d_str);
}
