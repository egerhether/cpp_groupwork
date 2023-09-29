#include "sum.ih"

int sum(int argc, char *argv[], int)
{
    int sum = 0;
    for (int idx = 0; idx != argc; ++idx)
        sum += stoi(argv[idx]);         //sum up all args
    return sum;
}
