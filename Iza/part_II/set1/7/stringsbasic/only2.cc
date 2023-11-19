#include "strings.ih"

void only2(ostream &out,Strings const &strings, size_t idx)
{
    switch (idx)
    {
        case 0:
            out << strings.at(0) << ", and: ";
            break;

        case 1:
            out << strings.at(1) << '\n';
            break;

        default:
            break;
    }
}