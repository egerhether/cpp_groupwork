#include "strings.ih"

namespace {
    string emptyString;
}

std::string &Strings::safeAt(size_t idx) const
{
    if (idx >= d_size)
    {
        emptyString.clear();
        return emptyString;
    }

    return *d_str[idx];
}
