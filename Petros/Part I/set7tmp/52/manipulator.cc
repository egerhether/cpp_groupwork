#include "main.ih"

ostream &now(ostream &stream)
{
    time_t now = time(0);
    return stream << put_time(localtime(&now),"%a %b %d %H:%M:%S %Y");
}