#include "person.ih"

                    // read data for all Persons from std input
static void readData(Person persons[], size_t size)
{
    for (size_t i = 0; i < size; ++i)
    {
        cout << "? ";
        persons[i].extract(cin);
    }
}