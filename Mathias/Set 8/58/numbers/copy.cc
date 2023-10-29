#include "numbers.ih"

Numbers& Numbers::operator=(const Numbers &other) {
    if (this == &other)
        return *this;

    delete[] data;
    size = other.size;
    data = new int[size];
    for (int i = 0; i < size; ++i)
        data[i] = other.data[i];
        
    return *this;
}
