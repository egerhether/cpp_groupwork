#include "strings.ih"

void Strings::reserve(size_t newCapacity)
{
    if (newCapacity <= d_capacity)
        return; // no need to change the capacity.

    string **newStr = initPointers(newCapacity);

    if (d_str)  // Check if there's data
        destroy();

    d_str = newStr;
    d_capacity = newCapacity;
}
