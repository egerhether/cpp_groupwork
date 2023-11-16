#include "main.ih"

bool structCall(int argc, char **argv)
{
    ReturnValues values = combine(argc, argv);

    if (values.ok == false)
    {
        cout << "provided argument number doesn't exist\n";
        return false;
    }
    else 
    {
        displayVals(values);
        return true;
    }
}