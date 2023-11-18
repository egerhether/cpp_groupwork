#include "cppmath.ih"

double sin(size_t degrees, size_t minutes, size_t seconds = 0)
{
    double totalDeg = degrees + minutes/60 + seconds/3600;
    return sin(totalDeg);
}
