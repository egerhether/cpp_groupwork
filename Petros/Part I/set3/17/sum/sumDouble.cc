#include "sum.ih"

double sum(int argc, char *argv[], double)
{
    double sum = 0;
    for (size_t idx = 0; idx != argc; ++idx)
        sum += stod(argv[idx]);
    return sum;
}
