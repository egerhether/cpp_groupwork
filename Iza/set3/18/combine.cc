#include "main.ih"

ReturnValues combine (int argc, char **argv)
{
    ReturnValues values;

    if (argv[stoul(argv[1])] != NULL)
        values.ok = true;
    else
        values.ok = false;

    if (values.ok)
    {
        values.nr = stoul(argv[1]);
        values.value = argv[values.nr];
    }

    return values;
}