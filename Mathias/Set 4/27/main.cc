#include "main.ih"

int main()
{
    const size_t arraySize = 5;  // Number of Person objects in the array
    Person persons[arraySize];   // Create an array of Person objects

    // Get data for all Persons from std input
    Person::readData(persons, arraySize);
    
    // Output the data of all persons
    Person::outputData(persons, arraySize);
}
