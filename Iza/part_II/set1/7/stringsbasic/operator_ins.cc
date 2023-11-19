#include "strings.ih"

ostream &operator<<(ostream &stream, Strings const &obj)
{
    return obj.insertInto(stream);
}