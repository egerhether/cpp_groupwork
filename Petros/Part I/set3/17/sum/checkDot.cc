#include "sum.ih"

bool checkDot(int argc, char *argv[])
{
    for (size_t idx = 0; idx != argc; ++idx)
    {
        string argument = argv[idx];
        if (argument.find('.') != string::npos) 
            return true;
    }
    return false;
}
