#include "main.ih"

void read(Person people[], size_t arraySize, istream &read)
{    
    for (size_t idx = 0; idx != 5; ++idx)
    {
        people[idx].extract(read);
        cout << "?\n";
    }   
}
