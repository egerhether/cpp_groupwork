# include <iostream>

using namespace std;

int main (int argc, char* argv[])
{
    int const value = stoul(argv[1]);
    for (size_t idx = 0; idx != 11; ++idx)
        cout << idx << " * " << value << " = " << idx * value << '\n';

}