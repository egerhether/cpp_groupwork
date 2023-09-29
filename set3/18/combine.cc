#include "main.ih"

ReturnValues combine(int argc, char **argv)
{
    ReturnValues values;

    if (argv[stoul(argv[1])] != NULL)   // If the requersted arguement exists
    {
        values.ok = true;
        values.nr = stoul(argv[1]);     
        values.value = argv[values.nr]; //update POD with the vals we have
    }

    else
        values.ok = false;              // arg not found

    return values;
}
