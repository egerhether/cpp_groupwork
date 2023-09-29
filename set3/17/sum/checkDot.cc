#include "sum.ih"

                                // checks whether there is a dot in our str
                                // if so returns true otherwise false
bool checkDot(int argc, char *argv[])
{
    for (size_t int = 0; idx != argc; ++idx)
    {
        string argument = argv[idx];
        
                                        // if a dot is found npos will not be returned
        if (argument.find('.') != string::npos)
            return true;
    }
    return false;
}
