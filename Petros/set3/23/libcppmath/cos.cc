#include "cppmath.ih"

double cos(size_t degrees)
{
    double rad = degreeToRad(degrees);
    return cos(rad);
}
