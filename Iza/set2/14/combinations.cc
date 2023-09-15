#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    ++argv;                         // avoid program name

                                    // first for loop, responsible for all
                                    // combinations, we need 2^(argc-1)
                                    // of them so hence the condition
    for (int idx = 0; idx != 1 << (argc - 1); ++idx) 
    {
        cout << idx + 1 << ": "; // output number of combination

                                // second for loop for each combination
                                // iterating from 0 to argc - 1as this is
                                // the max number of arguments in one line
        for (int jdx = 0; jdx != argc; ++jdx) 
        {
                                // outputs argument if jdx'th bit of idx
                                // is set
            if ((idx >> jdx) & 1)
                cout << argv[jdx] << " ";
        }
        cout << '\n';           // end line
    }
}