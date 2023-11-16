# include "sum.ih"

double sum(int argc, char *argv[], double)
{
    double summed = 0;

    for (size_t idx = 1; idx != static_cast<size_t>(argc); ++idx)
        summed += stod(argv[idx]);

    return summed;

}