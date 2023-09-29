#include "main.ih"

bool structCall(int argc, char **argv)
{
    ReturnValues values = combine(argc, argv);

                               
    if (!values.ok)         // If the requested arguement does not exist
    {
        cout << "provided argument number doesn't exist\n";
        return false;
    }
    else
    {
        displayVals(values);            // If ok print the data we have
        return true;
    }
}
