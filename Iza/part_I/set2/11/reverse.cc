# include <string>
# include <iostream>

using namespace std;

int main()
{
    string inputLine; 
                             // read line while providing true until EOF
    while (getline(cin, inputLine))
    {
                    // reverses each line by outputting one by one
                    // characters pointed to by the iterator from last to 
                    // first           
        for (string::const_reverse_iterator revIt = inputLine.crbegin();
            revIt != inputLine.crend(); ++revIt)
                cout << *revIt; // output what character revIt points to
        
        cout << '\n'; // insert new line after the line ends
    }
}