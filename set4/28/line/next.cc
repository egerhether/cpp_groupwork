#include "line.ih"

std::string Line::next()
{       
    size_t firstDelim = d_inputLine.find_first_of("\t \0");
    size_t secondDelim = d_inputLine.find_first_of("\t \0", firstDelim+1);
    std::string substring = d_inputLine.substr(firstDelim+1, 
                    secondDelim - firstDelim-1); // remove final space or tab

    return substring;
}