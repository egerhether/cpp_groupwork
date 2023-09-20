# include "sum.ih"

int sum(int argc, char *argv[], int)
{
    int summed = 0;

    for (size_t idx = 1; idx != static_cast<size_t>(argc); ++idx)
        summed += stoi(argv[idx]);

    return summed;
}