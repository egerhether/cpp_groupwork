#include "main.ih"

void write(Person people[], size_t arraySize, ostream &out)
{
    for (size_t idx = 0; idx != arraySize; ++idx)
    {
        people[idx].insert(out);
    }
}
