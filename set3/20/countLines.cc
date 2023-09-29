#include "main.ih"

void countLines()
{
    string inputLine;
    size_t nrLines = 0;

    while (getline(cin,inputLine)) // while there's lines to input
    {
        nrLines += 1; // add one to line
    }

    cout << "The total number of lines is " << nrLines << '\n';
}