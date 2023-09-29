#include "main.ih"

void displayVals(ReturnValues values)
{
    if (not values.ok)
    {
        cout << "The requested arguement does not exist\n";
        return;
    }

    cout << "The requested arguement number is " << values.nr <<
            " and that arguement is " << values.value << '\n';
    return; 
}