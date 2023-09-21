#include "main.ih"

void countChars()
{
    string inputLine;
    size_t nrChars = 0;

    while(getline(cin,inputLine))
    {

        for (string::const_iterator it = inputLine.begin();
            it != inputLine.end(); ++it)
            nrChars += 1;
    }

    cout << "The total number of characters is " << nrChars << '\n';
}