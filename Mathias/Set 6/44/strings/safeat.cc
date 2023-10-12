#include "strings.ih"

namespace {
    string emptyString;
}

std::string *Strings::safeAt(size_t idx) const
{
    if (idx >= d_size)
    {
        emptyString.clear();
        return &emptyString;  // Return a pointer to the empty string
    }

    return d_str[idx];  // Return a pointer to the string at index idx
}
