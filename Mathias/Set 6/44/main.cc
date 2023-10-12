#include "main.ih"
#include "strings.h"
int main()
{
    Strings strings{ cin };

    for (size_t idx = 0, end = strings.size(); idx != end; ++idx)
        cout << "line " << idx + 1 << ": " << strings.at(idx) << '\n' << flush;
}