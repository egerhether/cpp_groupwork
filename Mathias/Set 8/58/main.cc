#include "main.ih"

int main()
{
    Numbers numbers1(3, 47);  // 3 ints initialized to 47
    Numbers numbers2(3);      // 3 uninitialized ints for testing
                              // inspect the elements
    numbers1.at(2) = 99;
    numbers2.at(1) = 123;

                              // print out the values
    numbers1.write(cout);
    numbers2.write(cout);

                              // get the length using 'length'
    cout << "Length of numbers1: " << numbers1.length() << '\n';
    cout << "Length of numbers2: " << numbers2.length() << '\n';
}
 