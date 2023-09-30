#include "sum.ih"

double sum(int argc, char *argv[], double)
{
    double sum = 0;
    for (int idx = 0; idx != argc; ++idx)
        sum += stod(argv[idx]);         // sum up all digits in the arguement
    return sum;
}