#include "main.ih"

void countWords()
{
    string inputLine;
    size_t nrWords = 0;

    while(getline(cin,inputLine))
    {

        for (string::const_iterator it = inputLine.begin();
            it != inputLine.end(); ++it)
        {
            if (*it == ' ')
                nrWords += 1;
        }
        nrWords += 1;
    }

    cout << "The total number of words is " << nrWords << '\n';
}