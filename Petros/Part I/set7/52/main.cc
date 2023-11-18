#include <iostream>
#include <iomanip>
#include <chrono>

using namespace std;

auto now()
{
    time_t time = chrono::system_clock::to_time_t(chrono::system_clock{}.now());
    return put_time(localtime(&time), "%r");
}

int main()
{
    cout << now() << '\n';
}

