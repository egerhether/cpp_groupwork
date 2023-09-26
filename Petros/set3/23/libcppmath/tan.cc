#include "cppmath.ih"

double tan(size_t degrees)
{
    double rad = degreeToRad(degrees);
    return tan(rad);
}
