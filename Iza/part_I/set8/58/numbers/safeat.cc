#include "numbers.ih"

namespace {
    int nr;
}

int &Numbers::safeAt(size_t idx) const
{
    if (idx >= d_length)
    {
        cout << "Error: index out of bounds";
        return nr;
    }

    return d_ints[idx];
}