# include <iostream>
# include <math.h>

using namespace std;

int main()
{
    for (size_t nr = 100; nr != 1000; ++nr)
    {
        size_t root1 = sqrt(nr + 32);
        size_t root2 = sqrt(nr - 13);
        if ((root1 * root1 == nr + 32) & (root2 * root2 == nr - 13))
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