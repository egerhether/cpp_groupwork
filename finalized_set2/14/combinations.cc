#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    ++argv;                    // avoid program name

                                    // first for loop, responsible for all
                                    // combinations, we need 2^(argc-1)
                                    // of them so hence the condition
    for (size_t idxComb = 0, nrCombs = 1 << (argc - 1); 
            idxComb != nrCombs; ++idxComb) 
    {
        cout << idxComb + 1 << ": "; // output number of combination

                                // second for loop for each combination
                                // iterating from 0 to argc - 1as this is
                                // the max number of arguments in one line
        for (size_t idxArg = 0, nrOfArgs = argc; idxArg != nrOfArgs; ++idxArg) 
        {
                                // outputs argument if idxArg'th bit of 
                                // idxComb is set
            if ((idxComb >> idxArg) & 1)
                cout << argv[idxArg] << " ";
        }
        cout << '\n';           // end line
    }
}