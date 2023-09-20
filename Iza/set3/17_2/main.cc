# include "main.ih"

int main(int argc, char *argv[])
{
    for (size_t arg = 1; arg != static_cast<size_t>(argc); ++arg)
    {
        for (size_t argChar = 0; argv[arg][argChar] != '\0'; ++argChar)
        {
            if (argv[arg][argChar] == '.')
            {
                cout << sum(argc, argv, 1.5) << '\n';
                return 0;
            }
        }

    }
    cout << sum(argc, argv, 1) << '\n';
}