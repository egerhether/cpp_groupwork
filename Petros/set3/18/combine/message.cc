#include "combine.ih"

void message(ReturnValues Values)
{
    if (not Values.ok)
    {
        cout << "The requested arguement does not exist\n";
        return;
    }

    cout << "The requested arguement number is " << Values.nr <<
            " and that arguement is " << Values.value << '\n';
    return; 
}

