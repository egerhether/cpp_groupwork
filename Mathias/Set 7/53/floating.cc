#include <iostream>
#include <iomanip>

int main()
{
    double value = 12.04;
    std::cout << std::left << std::setw(15) << "std display" << " : " << std::setw(15) << value << '\n';
    std::cout << std::left << std::setw(15) << "left aligned" << " : " << std::setw(15) << std::left << value << '\n';
    std::cout << std::left << std::setw(15) << "right aligned" << " : " << std::setw(15) << std::right << value << '\n';
    std::cout << std::left << std::setw(15) << "3 digits" << " : " << std::setw(15) << std::fixed << std::setprecision(3) << value << '\n';
    std::cout << std::left << std::setw(15) << "4-digit fraction" << " : " << std::setw(15) << std::fixed << std::setprecision(4) << value << '\n';
    std::cout << std::left << std::setw(15) << "std display" << " : " << std::setw(15) << value << '\n';
}
