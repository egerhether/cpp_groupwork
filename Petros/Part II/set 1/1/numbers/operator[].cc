#include "numbers.ih"

int *Numbers::operator[](size_t idx)
{
    if (idx > d_size)           // test if index requested exists
    {
        cout << "idx is out of bounds, returning 0";
        return 0;               // don't know how to make exceptions yet
    }

    return *d_nums[idx];
}
