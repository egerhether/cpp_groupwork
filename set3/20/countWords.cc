#include "main.ih"

void countWords()
{
    string inputLine;
    size_t nrWords = 0;

    while(getline(cin,inputLine)) // while there's lines to input
    {

        for (string::const_iterator it = inputLine.begin();
            it != inputLine.end(); ++it)
        {
            if (*it == ' ') // add one for every space
                nrWords += 1;
        }
        nrWords += 1; // and one at the end
    }

    cout << "The total number of words is " << nrWords << '\n';
}