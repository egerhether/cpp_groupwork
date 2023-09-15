#include<iostream>
#include<string>
#include<ctype.h>

using namespace std;

int main()
{
    string asciiLetters;                // initialize str we will output
                                        
                                        // intialize char which we will
    char letter;                        // check whether is a letter 

                                        // for loop from 0 to 255
                                        // as there are 256 ascii chars
    for (size_t idx = 0; idx != 256; ++idx)
    {
                                        // use static_cast to convert
                                        // our idx to its respective
                                        // ascii character
        letter = static_cast<char>(idx);

                                        // upper & lower case are attributes
                                        // we can test for in a character
                                        // to check whether they are letters
                                        // (using isupper or islower)
        if (isupper(letter) || islower(letter))
        {
            asciiLetters += letter;     // if letter append to our string
        }
    }

    cout << asciiLetters << '\n';
}
