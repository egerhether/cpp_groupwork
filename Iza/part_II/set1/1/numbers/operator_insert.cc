#include "numbers.ih"

std::ostream &operator<<(std::ostream &stream, Numbers const &obj)
{
    for (size_t idx = 0; idx != obj.d_size; ++idx)
        stream << obj[idx] << ' ';

    return stream;
}