# include <iostream>

using namespace std;

int main()
{
    for (size_t nr = 100; nr != 1000; ++nr)
    {
        bool square1 = false;
        bool square2 = false;

        for (size_t idx = 1; idx * idx < nr - 13; ++idx)
        {
            if (((nr - 13) % idx == 0) && ((nr - 13) / idx == idx))
            {
                square1 = true;
                break;
            }
        }

        for (size_t idx = 1; idx * idx < nr + 32; ++idx)
        {
            if (((nr + 32) % idx == 0) && ((nr + 32) / idx == idx))
            {
                square2 = true;
                break;
            }
        }

        if (square1 & square2)
        {   
            cout << nr << " satisfies the requirements\n";
            break;
        }

        if (nr == 999)
        {
            cout << "No number satisfying the requirements was found\n";
            return 1;
        }
    }
        
}