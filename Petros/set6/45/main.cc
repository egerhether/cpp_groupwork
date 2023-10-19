#include "main.ih"


int main(int argc, char *argv[])
{
    Strings strings1{ cin };

    for (size_t idx = 0, end = strings1.size(); idx != end; ++idx)
        cout << "line " << idx + 1 << ": " << strings1.at(idx) << '\n';

    strings1.reverse();
    cout << '\n';

    for (size_t idx = 0, end = strings1.size(); idx != end; ++idx)
    cout << "line " << idx + 1 << ": " << strings1.at(idx) << '\n';
}
