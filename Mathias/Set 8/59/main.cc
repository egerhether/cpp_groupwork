#include "main.ih"

int main(int argc, char **argv)
{                   // tester
    if (argc == 2)
    {
        Strings strings(stoul(argv[1]), true);
        strings.iterate(environ);
        cout << strings.at(0) << '\n' << strings.at(strings.size()-1) << '\n';
    }
    else if (argc == 3)
    {
        Strings strings(stoul(argv[1]), false);
        strings.iterate(environ);
        cout << strings.at(0) << '\n' << strings.at(strings.size()-1) << '\n';
    }
}
