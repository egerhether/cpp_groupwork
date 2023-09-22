# include <iostream>
# include <string>

using namespace std;

int main(int argc, char *argv[])
{
    int number = stoul(argv[1]);
    unsigned int unsignedNumber = number;
    string binaryForm;
    string powers;
    size_t currentPowerTwo = 1;
    int sizeOfBinary = sizeof(number) * 8;

    while (unsignedNumber) // while it's different from 0 create a string 
    {
        string bit = to_string(unsignedNumber & 1);
        binaryForm = bit + binaryForm;
        unsignedNumber = unsignedNumber >> 1;
    }

    for (string::const_reverse_iterator revIt = binaryForm.crbegin();
            revIt != binaryForm.crend(); ++revIt)
    {
        if(*revIt == '1')
        {
            if (powers.length() > 0)
                powers = " + " + powers;
            powers = to_string(currentPowerTwo) + powers;
        }
        currentPowerTwo = 2 * currentPowerTwo;
    }
    
    if (int binaryLength = binaryForm.length(); binaryLength != sizeOfBinary)
         for (int idx = 0; idx != sizeOfBinary - binaryLength; ++idx)
            binaryForm = "0" + binaryForm; 

    cout << number << " = " << binaryForm << " = " << powers << '\n';
}