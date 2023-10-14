#include "main.ih"

int main()
{
    Strings strings{ cin };
    string str = "hello";
    strings.resize(strings.size()+3, str);

    for (size_t idx = 0, end = strings.size(); idx != end; ++idx)
        cout << "line " << idx + 1 << ": " << strings.at(idx) << '\n';
}