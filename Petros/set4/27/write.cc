#include "main.ih"

void write(Person people[], size_t arraySize, ostream &out)
{
    for (size_t idx = 0; idx != arraySize; ++idx)
                                // use insert from the previous exercise
                                // for each of the people
        people[idx].insert(out);
}
