#include "cppmath.ih"

double sin(size_t degrees)
{
    double rad = degreeToRad(degrees);
    return sin(rad);
}
