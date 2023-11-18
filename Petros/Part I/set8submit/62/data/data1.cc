#include "data.ih"

Data::Data(double (*array)[10])
:
    u_double(array)
{
    u_field = ARRAY;
}