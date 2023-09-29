#include "main.ih"

int main(int argc, char **argv)
{
                                    // if the correct argument is specified
    if (argc == 2 && argv[1][0] == '-')
    {
        switch (argv[1][1])         // based on the argument choose the action
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

            default:                // if wrong letter is specified
                cout << "Enter either '-c', '-w', or '-l'\n";
        }
    }
    else 
    {
        cout << "Specify exactly one argument starting with '-'\n";
        return 1;
    }
}

