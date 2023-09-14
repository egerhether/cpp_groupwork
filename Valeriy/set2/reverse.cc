#include <iostream>
#include <string>
using namespace std;


int main()
{
    string input;
    string reversedText;
    cout << "Please enter lines of text, using Ctrl+D when done." << '\n';
    while(getline(cin, input))
    {
        for (size_t idx = input.length() - 1;idx-- > 0;)
        {
            reversedText += input[idx];
        }
    reversedText += '\n';
    }
    cout << reversedText << '\n';
}
