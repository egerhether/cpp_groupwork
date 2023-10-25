#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

                    // manipulator for the date and time
struct manipulator
{
    friend ostream& operator<<(ostream& os, const manipulator& manip)
    {
        time_t now = time(nullptr);
        tm time = *localtime(&now);
        return os << put_time(&time, "%c");
    }
};

                    // create an object of the manipulator
manipulator now;

int main()
{
    cout << now << '\n';
}
