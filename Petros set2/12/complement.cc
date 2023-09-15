#include<iostream>
#include<string>

using namespace std;

int main(int argc, char *argv[])
{
    unsigned integer = stoi(argv[1]);
    cout << integer;

    string binary;
    string bit;
    while (integer)
    {
        bit = to_string(integer & 1);
        binary.insert(0,bit);
        integer >>= 1;
    }
    cout << '=' << binary << '=';

    size_t power = 1;
    bool state = false;
    string out;
    for (size_t idx = binary.length(); idx != 0; idx--)
    {
        if (binary[idx-1] == '1')
        {
            if (state)
            {
                out.insert(0, "+");
            }
            out.insert(0, to_string(power));
            state = true;
        }
        power *= 2;
    }
    cout << out << '\n';
}
