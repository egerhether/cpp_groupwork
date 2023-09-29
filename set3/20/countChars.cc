#include "main.ih"

void countChars()
{
    string inputLine;
    size_t nrChars = 0;

    while (getline(cin,inputLine)) // while there's line to input
    {

        for (string::const_iterator it = inputLine.begin();
            it != inputLine.end(); ++it)
            nrChars += 1; // add one per each character we iterate over
    }

    cout << "The total number of characters is " << nrChars << '\n';
}