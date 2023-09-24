#include <iostream>
#include <string>

using namespace std;

int main(int, char* argv[])
{                                   // We use stoi to convert
    int const value = stoi(argv[1]);// our input to an int

                    // idx 1 to 10 to multiply our value with
    for (int idx = 1; idx != 11; ++idx)
    {               
                    // We stream out the multiplication
                    // table
        cout <<  idx << " * " << value  << " = " << idx * value 
             << '\n';
    }
}
