#include "main.ih"

void countLines()
{
    string inputLine;
    size_t nrLines = 0;

    while(getline(cin,inputLine))
    {
        nrLines += 1;
    }

    cout << "The total number of lines is " << nrLines << '\n';
}