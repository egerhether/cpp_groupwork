#include "main.ih"

void read(Person people[], size_t arraySize, istream &read)
{
    for (size_t idx = 0; idx != arraySize; ++idx)
    {                           
                                // use extract from previous exercise
                                // for each of the people.
        people[idx].extract(read);      
        cout << "?\n";
    }
}

