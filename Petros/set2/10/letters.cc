#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string asciiLetters;                // initialize str we will output

                                        // as there are 256 ascii chars
    for (size_t idx = 0; idx != 256; ++idx)
    {
                                        // use static_cast to convert
                                        // our idx to its respective
                                        // ascii character
        char const letter = static_cast<char>(idx);

                                        // to check whether they are letters
                                        // using isupper or islower (all 
                                        // letters are one or the other)
        if (isalpha(letter))
            asciiLetters += letter;     // if letter append to our string
    }

    cout << asciiLetters << '\n';
}
