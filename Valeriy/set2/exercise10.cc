#include <iostream>
#include <string>
using namespace std;

int main()
{
    string asciiCharacters = ""; 			//declares a string that is to be filled with the characters
    for(size_t idx = 0; idx !=128; ++idx)		//using a for loop, goes over all 128 ascii characters
        {
            asciiCharacters += static_cast<char>(idx);	//using static_cast, converts the number idx to an ascii character
							//and adds it to the string
        }
    cout << asciiCharacters << '\n';
}
