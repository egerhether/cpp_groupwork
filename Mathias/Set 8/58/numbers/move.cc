#include "numbers.ih"

Numbers& Numbers::operator=(Numbers &&other) noexcept {
    if (this == &other)
        return *this;

    delete[] data;
    data = other.data;
    size = other.size;
    other.data = nullptr;
    other.size = 0;
    return *this;
}