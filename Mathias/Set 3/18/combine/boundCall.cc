#include "combine.ih"

void boundCall(int argc, char *argv[])
{
    ReturnValues out;
    out = combine(argc, argv);
    message(out);
    return;
}