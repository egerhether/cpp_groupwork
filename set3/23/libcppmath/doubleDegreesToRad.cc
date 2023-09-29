#include "cppmath.ih"
                                // specifically made for the trig functions
                                // that use minutes and seconds, as the
                                // degrees will have floating points
double degreeToRad(double degrees)
{
    double rad = degrees * M_PI/180;
    return rad;
}
