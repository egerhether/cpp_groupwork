#include "line.ih"

bool Line::getLine()
{
    std::getline(std::cin,d_inputLine);

    for (std::string::const_iterator it = d_inputLine.begin();
            it != d_inputLine.end(); ++it)
        if (*it == '\t' || std::isspace(*it))
            return true;

    return false;
}