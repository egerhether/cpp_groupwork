# include <string>
# include <iostream>

using namespace std;

int main()
{
    string inputLine; 

    while (getline(cin, inputLine)) // read line while providing constant true
    {
                // initialise revIt at the last character of inputLine
                // for loop goes on as long as revIt is not the first 
                // character of inputLine and we increment revIt with each
                // loop meaning revIt reads earlier characters with each new 
                // iteration.
        for(string::const_reverse_iterator revIt = inputLine.crbegin();
            revIt != inputLine.crend(); ++revIt)
                cout << *revIt; // output what character revIt points to
        
        cout << '\n'; // insert new line after the line ends

        if (inputLine.contains(EOF)) // checks for end-of-file to break loop
            break;
    }
}