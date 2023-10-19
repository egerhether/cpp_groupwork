#include "main.ih"

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        cout << "no arguements given, please give arguements\n";
        return 1;
    }

    --argc;
    ++argv;
    
    bool dot = checkDot(argc, argv);

    if (dot)
    {
        double dummy = 0;
        cout << sum(argc, argv, dummy) << '\n';
    }

    else
    {
        int dummy = 0;
        cout << sum(argc, argv, dummy) << '\n';
    }
}
