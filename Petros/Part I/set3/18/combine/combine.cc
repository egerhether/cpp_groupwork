#include "combine.ih"

struct ReturnValues combine(int argc, char *argv[])
{

    size_t const requestedArgNum = stoi(argv[1]);
    ReturnValues out;

    if (requestedArgNum > argc)
    {
        out.nr = requestedArgNum;
        return out;
    }

    string requestedArg = argv[requestedArgNum - 1];
    out.ok = true;
    out.nr = requestedArgNum;
    out.value = requestedArg;
    

    return out;
}
