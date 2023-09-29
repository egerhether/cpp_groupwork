#include "findcase.ih"

string str_tolower(string str)
{
    string lowerStr;

    for (string::const_iterator it = str.begin();
            it != str.end(); ++it)
            lowerStr += tolower(*it); // go to lower by character
    
    return lowerStr;
}