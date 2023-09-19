#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    bool state = false;
    int satisfies;

    for (size_t idx = 100; idx != 1000; ++idx)
    {   
        int lower = idx - 13;
        int upper = idx + 32;
        
        if (int (sqrt(lower)) * int (sqrt(lower)) == lower &&
            int (sqrt(upper)) * int (sqrt(upper)) == upper)
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
