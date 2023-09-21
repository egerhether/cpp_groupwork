#include "main.ih"

int main(int argc, char **argv)
{

    if (argc == 2 && argv[1][0] == '-')
    {
        switch (argv[1][1])
        {
        case 'c':
            countChars();
            break;
        
        case 'w':
            countWords();
            break;
        
        case 'l':
            countLines();
            break;
        default:
            cout << "Enter either '-c', '-w', or '-l'\n";
        }


    }
    else 
    {
        cout << "Specify exactly one argument starting with '-'\n";
        return 1;
    }
}

