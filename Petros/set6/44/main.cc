#include "main.ih"


int main(int argc, char *argv[])
{
    Strings strings1{ cin };
    Strings strings2{ argc, argv };

    for (size_t idx = 0, end = strings1.size(); idx != end; ++idx)
        cout << "line " << idx + 1 << ": " << strings1.at(idx) << '\n';

    strings1.reverse();
    cout << '\n';

    for (size_t idx = 0, end = strings1.size(); idx != end; ++idx)
    cout << "line " << idx + 1 << ": " << strings1.at(idx) << '\n';


    cout << '\n';

    for (size_t idx = 0, end = strings2.size(); idx != end; ++idx)
        cout << "line " << idx + 1 << ": " << strings2.at(idx) << '\n';
}
