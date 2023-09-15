#include<iostream>

using namespace std;

bool isSquare(size_t);

int main()
{
    bool state = false;
    size_t satisfies;
    for (size_t idx = 100; idx != 1000; ++idx)
    {   
        if (isSquare(idx-13) && isSquare(idx+32))
        {
           state = true;
           satisfies = idx;
           break;
        }
    }

    if (state)
    {
        cout  << satisfies << " satisfies the requirements\n";
    }
    else
    {
        cout << "No number satisfies the requirements";
    }
}

bool isSquare(size_t test)
{   
    bool state = false;
    size_t stop = test/2;

    if (test == 0 or test == 1)
    {
        state = true;
    }
    else
    {
        if (test % 2)
        {
            for (size_t idx = 3; idx < stop; idx += 2)
            {
                if (test == idx * idx)
                {
                    state = true;
                    break;
                }
            }
        }

        else
        {
            for (size_t idx = 2; idx < stop; idx += 2)
            {
                if (test == idx * idx)
                {
                    state = true;
                    break;
                }
            }
        }
    }
    return state;
}


