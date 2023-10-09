#include <iostream>
#include "copyCat/copyCat.hh"

using namespace std;

int main(int argc, char** argv)
{
    if (argc > 1)
    {
        CopyCat item1(argc, argv);

        // Print the copied data from item1
        for (size_t i = 0; i < item1.countElements(); ++i)
            cout << "item1[" << i << "]: " << item1[i] << '\n';
    }
    else
    {
        char* customData[] = {"pineapple", "banana"};
        CopyCat item2(customData);

        // Print the copied data from item2
        for (size_t i = 0; i < item2.countElements(); ++i)
            cout << "item2[" << i << "]: " << item2[i] << '\n';
    }
}
