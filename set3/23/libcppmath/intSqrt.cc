#include "cppmath.ih"

int sqrt(int square)
{
    if (square < 0)             // Check if negative
    {
        cout << "input a positive number";
        return square;
    }
    
    unsigned long long toRoot = square;
    return sqrt(toRoot);
}
