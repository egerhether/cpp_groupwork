#include "main.ih"

int main()
{
    int square; 
    cout << "intput the number you want to find the root of \n";
    cin >> square;
    cout << "sqrt int output: " << sqrt(square) << '\n';
    
    unsigned long long squareLongLong = square;
    cout << "sqrt long long output: " << sqrt(squareLongLong) << '\n';

    size_t degrees;
    cout << "input degrees for sin \n";
    cin >> degrees;
    cout << "sin(" << degrees << ") = " << sin(degrees) << '\n';
}
