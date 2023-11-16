#include "main.ih"

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        cout << "specify 2 arguments";
        return 0;
    }
    size_t offset = findcase(argv[1], argv[2], argc < 4 ? 0 : stoul(argv[3]));

    cout << "findcase: '" << argv[2] << "' ";
    if (offset == string::npos)
        cout << "not found\n";
    else 
        cout << "found at offset " << offset << '\n';
}
