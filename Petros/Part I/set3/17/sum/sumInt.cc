#include "sum.ih"

int sum(int argc, char *argv[], int)
{
    int sum = 0;
    for (size_t idx = 0; idx != argc; ++idx)
        sum += stoi(argv[idx]);
    return sum;
}
