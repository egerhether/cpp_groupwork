#include "strings.ih"

Strings::Strings(char *environLike[])
    : d_size(count(environLike)),
      d_capacity(d_size),  // Capacity should match d_size
      d_str(new std::string*[d_size])
{
    for (size_t i = 0; i < d_size; ++i)
    {
        d_str[i] = new std::string();
    }
    fill(environLike);
}
