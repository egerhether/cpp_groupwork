#include "main.ih"

int main(int argc, char *argv[])
{
    if (argc == 1)                      // program wants args
    {
        cout << "no arguements given, please give arguements\n";
        return 1;
    }

    --argc;
    ++argv;
                                        // check if there's a dot
    bool dot = checkDot(argc, argv);

    if (dot)
    {
        double dummy = 0;               // run the double function
        cout << sum(argc, argv, dummy) << '\n';
    }

    else
    {
        int dummy = 0;                  // run the int function
        cout << sum(argc, argv, dummy) << '\n';
    }
}