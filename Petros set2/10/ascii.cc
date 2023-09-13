#include <iostream>
#include <string>

using namespace std;

int main() {
    string ascii = "";
    
    for(size_t idx = 0; idx != 256; ++idx)
    {
        ascii += '0' + static_cast<char>(idx);
    }
    cout << ascii << '\n';
}
