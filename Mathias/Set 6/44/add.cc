#include "strings.ih"

void Strings::add(string const &next)
{
    if (d_size >= d_capacity)
    {
        size_t newCapacity = (d_capacity == 0) ? 1 : d_capacity * 2;
        reserve(newCapacity);
    }

    d_str[d_size] = new std::string(); // allocate a new empty string
    *d_str[d_size] = next; // copy the 'next' data to the newly allocated string
    ++d_size;
}
