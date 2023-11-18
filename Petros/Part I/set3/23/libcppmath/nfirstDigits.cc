#include "cppmath.ih"

size_t nFirstDigits(size_t n, string* number)
{
    string numberCopy = *number;
    
    if (numberCopy.size() < n)
        numberCopy.insert(0, 1, '1');

    reverse(&numberCopy);
    string digitsStr;
    for (size_t idx = 0; idx != n; ++idx)
    {
        char const digit = numberCopy[numberCopy.size() - 1];
        digitsStr.append(1, digit);
        numberCopy.pop_back();
    }
    reverse(&numberCopy);
    *number = numberCopy;
    return stoi(digitsStr);
}
