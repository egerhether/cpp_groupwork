# include <iostream>
# include <cmath>

using namespace std;

int main()
{
    for (size_t nr = 100; nr != 1000; ++nr)
    {
                                            // check if number fulfils 
                                            // requirements
        if (size_t sqrt1 = sqrt(nr - 13), sqrt2 = sqrt(nr + 32); 
                sqrt1 * sqrt1 == nr - 13 && sqrt2 * sqrt2 == nr + 32)
        {   
            cout << nr << " satisfies the requirements\n";
            break;
        }

        if (nr == 999) // if we go through all numbers and none fulfil
        {
            cout << "No number satisfying the requirements was found\n";
            return 1;
        }
    }      
}