# include <iostream>

using namespace std;

int main()
{
    cout << R"( ^\s+Encryption key:(\w+) )"     << '\n' <<
            R"( ^\s+Quality=(\d+) )"            << '\n' <<
            R"( ^\s+E?SSID:"([[:print:]]+)‎")" << '\n' <<
            R"( ^\s+ssid="([[:print:]]+)‎")"    << '\n'; 

}