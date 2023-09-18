#include<iostream>

using namespace std;

int main()
{
    bool state = false;                 // true is num is found
    size_t satisfies;                   // num that satisfies req (if exists)

    for (size_t idx = 100; idx != 1000; ++idx)
    {   
        int num1 = idx - 13;
        int num2 = idx + 32;
        bool square1 = false;           // True if num1 is square
        bool square2 = false;           // True if num2 is square

                                        // Check if num1 is square
                                        // we start at num % 2 and
                                        // increment by 2 because
                                        // if num1 even/odd then
                                        // sqrt(num1) (if integer) even/odd 
                                        // respectively. So we only
                                        // check odd numbers for num odd
                                        // and vice versa
        for (int idx1 = (num1 % 2); idx1 != num1; idx1 += 2)
        {
            if (num1 == idx1 * idx1)    // if so then num1 is square
            {
                square1 = true;         // change square state
                break;                  // no need to continue loop
            }
        }



                                        // Check if num2 is square
                                        // exactly the same way as before
        for (int idx1 = (num2 % 2); idx1 != num2; idx1 += 2)
        {
            if (num2 == idx1 * idx1)
            {
                square2 = true;
                break;
            }
        }


        if (square1 && square2)         // if both are square
        {
            state = true;               // we found our magic number
            satisfies = idx;            // fill in its value
            break;                      // break the loop
        }
    }

    if (state)                          // if we found such number
    {
        cout  << satisfies << " satisfies the requirements\n";
    }
    else                                // if we didn't
    {
        cout << "No number satisfies the requirements";
    }
}
