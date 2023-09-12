# include <string>
# include <iostream>

using namespace std;

int main()
{
    string inputLine;

    while (getline(cin, inputLine))
    {

        for(string::const_reverse_iterator revIt = inputLine.crbegin();
            revIt != inputLine.crend(); ++revIt)
                cout << *revIt;
        
        cout << '\n';

        if (inputLine.contains(-1))
            break;
    }
}