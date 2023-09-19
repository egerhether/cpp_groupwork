#include <iostream>
#include <string>

using namespace std;

int main(int, char *argv[])
{
    unsigned inputNum = stoi(argv[1]);
    cout << inputNum;

    string binary;
    for (size_t idx = 0; idx != 32; ++idx)
    {   char const bit = static_cast<char>(inputNum & 1);
        binary.insert(0, 1,  bit + '0');
        if (inputNum!= 0)
            inputNum >>= 1;
        else 
            inputNum = 0;
    }

    cout << '=' << binary << '=';

    size_t power = 1;
    bool addPlus = false;
    string out;
    for (size_t idx = binary.length(); idx != 0; idx--)
    {
        if (binary[idx-1] == '1')
        {   
            if (addPlus)
                out.insert(0, 1, '+');
           
            out.insert(0, to_string(power));
           
            if (idx == 1)
                out.insert(0, 1, '-');
           
            addPlus = true;
        }
        power <<= 1;
    }
    cout << out << '\n';
}
