#include "main.ih"

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        cout << "Provide one argument\n";
        return 1;
    }

    size_t iter = stoul(argv[1]);
    
    --argc;                     // subtract one which is for the program name
    ostream out(cout.rdbuf());
    out.setstate(ios::failbit);

    for (size_t idx = 0; idx != iter; ++idx)
    {
        if (out.good())
            out << "Nr. of command line arguments " << argc << '\n';
    }

}