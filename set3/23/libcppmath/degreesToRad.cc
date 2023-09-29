#include "cppmath.ih"
                                // redirects to the double function
double degreeToRad(size_t degrees)
{
    degrees %= 360;
    double doubDegrees = degrees;
    return degreeToRad(doubDegrees);
}
