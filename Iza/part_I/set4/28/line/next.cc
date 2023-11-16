#include "line.ih"

std::string Line::next()
{       

    size_t size = 0;
    std::string empty;
    size_t nonWsCounter = 0;
 
    for (std::string::const_iterator it = inputLine.begin();
            it != inputLine.end(); ++it)
    {
        ++size;
        if (*it == '\t' || std::isspace(*it) || ++it == inputLine.end())
        {
            if (nonWsCounter == 1)
            {
                std::string substring = inputLine.substr(0,inputLine.size());
                return substring;
            }
            inputLine.erase(0,inputLine.find(' ')+1);
            ++nonWsCounter; // we got rid of the first part
            size = 0; // reset size
        }
    }
    return empty;
}