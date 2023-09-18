#include<iostream>
#include<string>

using namespace std;

int main()
{
    string input;
    while (getline(cin, input))
    {
        for (size_t idx = input.length(); idx != 0; idx--)
        {
            cout << input[idx-1];
        }
    }
    
    cout << '\n';
}
