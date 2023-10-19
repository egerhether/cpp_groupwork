#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double value = 12.04;
    cout << "std display      \"" << setw(15) << value << "\"\n"
           << "left aligned     \"" << left << setw(15) << value  << "\"\n"
           << "right aligned    \"" << right << setw(15) << value << "\"\n"
           << "3 digits         \"" << setw(15) << fixed << setprecision(1) 
           << value << "\"\n"
           << "4-digit fraction \"" << setw(15) << setprecision(4) 
           << value << "\"\n"
           << "std display      \"" << setw(15) << setprecision(2) 
           << value << "\"\n";
}