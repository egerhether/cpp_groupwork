#include<iostream>
#include<string>

using namespace std;

int main(int argc, char *argv[])
{
    ++argv;
                                        // 1 << (argc-1) = 2^(argc-1)
    for (int idx = 0; idx != 1 << (argc-1); ++idx)
    {
        cout << idx + 1 << ':';         // out the combination number
        
        for (int jdx = 0; jdx != argc; ++jdx)
        {
            if ((idx >> jdx) & 1)
            {
                cout << argv[jdx] << ' ';
            }
        }
        cout << '\n';
    }
}
