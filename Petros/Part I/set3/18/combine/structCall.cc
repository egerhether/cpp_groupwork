#include "combine.ih"

bool structCall(int argc, char *argv[])
{
    ReturnValues out;
    out = combine(argc, argv);
    message(out);

    return out.ok;
}
