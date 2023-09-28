#include "line.ih"

bool Line::getLine()
{
    std::getline(std::cin,inputLine);

    for (std::string::const_iterator it = inputLine.begin();
            it != inputLine.end(); ++it)
        if (*it == '\t' || std::isspace(*it))
            return true;

    return false;
}