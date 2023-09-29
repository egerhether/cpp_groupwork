#ifndef CPPMATH_HH
#define CPPMATH_HH
#include "cppmath.ih"
#include <iostream>
#include <iosfwd>

// SQRT
unsigned long long sqrt(unsigned long long square);
int sqrt(int square);
size_t sqrt(size_t square);

// TRIG
// For the trig functions we use degreeToRad to use the equivalent cmath fcts

double degreeToRad(size_t degrees);
double degreeToRad(double degrees);
double sin(size_t degrees);
double cos(size_t degrees);
double tan(size_t degrees);
double sin(size_t degrees, size_t minutes, size_t seconds = 0);
double cos(size_t degrees, size_t minutes, size_t seconds = 0);
double tan(size_t degrees, size_t minutes, size_t seconds = 0);


struct POD                              // for SQRT functions
{
    unsigned long long root = 0;        // computed square root
    unsigned long long remainder = 0;
};

// interal functions

unsigned long long recursionStep(string strRep, POD carryOver);
size_t nFirstDigits(size_t n, string* number);
void reverse(string* toRev);


#endif
