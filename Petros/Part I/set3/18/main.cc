#include "main.ih"

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        cout << instructions::info;
        return 1;
    }

    if (not structCall(argc, argv))
        return 1;

    boundCall(argc, argv);
}
