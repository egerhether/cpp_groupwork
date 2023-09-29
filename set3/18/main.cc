#include "main.ih"

int main(int argc, char **argv)
{
    if (argc == 1) // if no arguments
    {
        cout << instructions::info;
        return 1;
    }

    if (not structCall(argc, argv)) // if argument doesn't exist
        return 0;
    
    boundCall(argc, argv);
}
