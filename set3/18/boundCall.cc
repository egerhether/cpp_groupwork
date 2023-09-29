#include "main.ih"

void boundCall(int argc, char **argv)
{
        ReturnValues values = combine(argc, argv);
        displayVals(values);
}