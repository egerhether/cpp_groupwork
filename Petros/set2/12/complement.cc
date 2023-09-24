#include <iostream>
#include <string>

using namespace std;

int main(int, char *argv[])
{                                       // Because we need tghe binary rep
                                        // we want an unsigned int
    unsigned inputNum = stoi(argv[1]);
    cout << inputNum;

    string binary;                      
                                        // Loop stops when we go through
                                        // all bits
    for (size_t idx = 0, sizeOfBinary = sizeof(inputnum)*8; 
         idx != sizeOfBinary; ++idx)
    {                                   
                                        // check if last digit of the
                                        // binary rep of our number is
                                        // 1 or 0 and add it to a char
        char const bit = static_cast<char>(inputNum & 1);
        
                                        // insert the char to the leftmost
                                        // position of our string
        binary.insert(0, 1,  bit + '0');
        if (inputNum!= 0)               // if we haven't gone thru all bits
                                        
                                        // shift our number's bits to test
                                        // wether the next digit is 1 or 0
            inputNum >>= 1;
        else 
            inputNum = 0;               // fill in extra spots with 0s
    }

    cout << '=' << binary << '=';

    size_t power = 1;                   // init powers of 2
    bool addPlus = false;               // tells us wether to add plus
    string out;                         // string we will output
                                        
                                        // we want loop to start on the right
                                        // most position of our binary rep
    for (size_t idx = binary.length(); idx != 0; idx--)
    {
        if (binary[idx-1] == '1')       // tests if digit is 1
        {
                                        // so we don't add plus before            
            if (addPlus)                // we out the first power 
                out.insert(0, 1, '+');
                                        // if digit = 1 insert power
                                        // to the leftmost pos of our
                                        // output string (want pwrs to
                                        // be in decreasing order)
            out.insert(0, to_string(power));
           
            if (idx == 1)               // If the last digit is 1, our number
                                        // is negative, and because of how
                                        // the computer represents unsigned
                                        // numbers, we negate the last pwr
                out.insert(0, 1, '-');
           
            addPlus = true;             // add plus after first pwr is added
        }
        power <<= 1;                    // mult  pwr by 2, get  next pwr of 2
    }
    cout << out << '\n';
}
