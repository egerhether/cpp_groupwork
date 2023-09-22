#include "findcase.ih"

size_t findcase(string const &str, string const &target, size_t offset = 0)
{
    string lowerStr = str_tolower(str);
    string lowerTarget = str_tolower(target);
    
    size_t position = lowerStr.find(lowerTarget, offset);

    if (target.empty())
        return string::npos;

    return position;
}