#include "main.ih"

int main(int argc, char **argv)
{
    if (argc == 1) // if no arguments
    {
        cout << "please provide an argument\n";
        return 0;
    }

    bool ok = structCall(argc, argv);

    if (ok == false) // if argument doesn't exist
        return 0;
    
    boundCall(argc, argv);

}
