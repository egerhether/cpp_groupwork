#include<iostream>
#include<string>

using namespace std;

int main(int, char *argv[])
{
    unsigned inputNum = stoi(argv[1]);
    cout << inputNum;

    string binary;
    while (inputNum != 0)
    {   string bit = to_string(inputNum & 1);
        binary.insert(0, bit);
        inputNum >>= 1;
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
                out.insert(0, "+");
            out.insert(0, to_string(power));
            addPlus = true;
        }
        power <<= 1;
    }
    cout << out << '\n';
}
