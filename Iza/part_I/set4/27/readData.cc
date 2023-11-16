#include "data.ih"

void readData(Person array[], size_t size)
{
    for (size_t idx = 0; idx != size; ++idx)
    {
        array[idx].extract(std::cin);
        std::cout << "? \n";
    }
}