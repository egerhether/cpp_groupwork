#include "findcase.ih"

size_t findcase(string const &str, string const &target, size_t offset = 0)
{
    if (target.empty()) // if target is empty return npos
        return string::npos;

    string lowerStr = str_tolower(str); // redude all characters to lowercase
    string lowerTarget = str_tolower(target); // same here
    
    size_t position = lowerStr.find(lowerTarget, offset); // find the target

    return position;
}