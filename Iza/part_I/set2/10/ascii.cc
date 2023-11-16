#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
    string allLetters;
    char asciiCharacter;

    for (size_t idx = 0; idx != 256; ++idx)
    {
        asciiCharacter = static_cast<char>(idx);

        if (isalpha(asciiCharacter) && islower(asciiCharacter))
            allLetters += asciiCharacter;
    }

    cout << allLetters << '\n';

}