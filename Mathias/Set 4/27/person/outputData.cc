#include "person.ih"

                    // output the data of all person objects
static void outputData(const Person persons[], size_t size)
{
    for (size_t i = 0; i < size; ++i)
    {
        persons[i].insert(cout);
    }
}