#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    bool state = false;
    int satisfies;

    for (size_t idx = 100; idx != 1000; ++idx)
    {   
        if (size_t lower = idx - 13, upper = idx + 32; 
            sqrt(lower) * sqrt(lower) == lower &&
            sqrt(upper) * sqrt(upper) == upper)
        {
            state = true;
            satisfies = idx;
            break;
        }
    }

    if (state)                          // if we found such number
        cout  << satisfies << " satisfies the requirements\n";
    else                                // if we didn't
        cout << "No number satisfies the requirements";
}
