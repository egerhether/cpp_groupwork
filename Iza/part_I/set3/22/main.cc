#include "main.ih"

int main(int argc, char **argv)
{
    switch (argc) 
    {
        case 1: // if no arguments
        cout << "specify n to compute nth fibonacci number\n";
        break;

        case 2: // if one argument call efficient fibonacci
        if (stoul(argv[1]) < 90)
            cout << fib(stoul(argv[1])) << '\n';
        else 
            cout << "enter a number less than 90\n";
        break;

        default: // otherwise call regular fibonacci
        cout << rawfib(stoul(argv[1])) << '\n';
    }        
}

