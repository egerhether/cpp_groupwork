#include "line.ih"

bool Line::getLine()
{
    getline(cin, line);
    stream.clear();
    stream.str(line);
    return !line.empty();
}