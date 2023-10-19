#include "cppmath.hh"

double degreeToRad(size_t degrees)
{
    double doubDegrees = degrees;
    return degreeToRad(doubDegrees);
}

double degreeToRad(double degrees)
{
    double rad = degrees * M_PI/180;
    return rad;
}

double sin(size_t degrees)
{
    double rad = degreeToRad(degrees);
    return sin(rad);
}

double cos(size_t degrees)
{
    double rad = degreeToRad(degrees);
    return cos(rad);
}

double tan(size_t degrees)
{
    double rad = degreeToRad(degrees);
    return tan(rad);
}

double cos(size_t degrees, size_t minutes, size_t seconds = 0)
{
    double totalDeg = degrees + minutes/60 + seconds/3600;
    return cos(totalDeg);
}

double sin(size_t degrees, size_t minutes, size_t seconds = 0)
{
    double totalDeg = degrees + minutes/60 + seconds/3600;
    return sin(totalDeg);
}

double tan(size_t degrees, size_t minutes, size_t seconds = 0)
{
    double totalDeg = degrees + minutes/60 + seconds/3600;
    return tan(totalDeg);
}

int sqrt(int square)
{
    if (square < 0)
    {
        cout << "input a positive number";
        return square;
    }

    unsigned long long toRoot = square;
    return sqrt(toRoot);
}

size_t sqrt(size_t square)
{
    unsigned long long toRoot = square;
    return sqrt(toRoot);
}

unsigned long long recursionStep(string strRep, POD carryOver)
{
    size_t const q = nFirstDigits(2, &strRep);

                            // Append the remainder to the left of q
    unsigned long long const rq = carryOver.remainder * pow(10, 2) + q;
    unsigned long long b = rq / 20 * carryOver.root;  // Estimate for b

    while (true)                        // runs indefinitely until we return
                                        // something
    {
        if (2 * 10 * carryOver.root * b + b * b > rq)
            --b;                        // if bigger than goal, decrement b
        else
        {
            carryOver.root  = carryOver.root * 10 + b;

            if (strRep.empty())         // if we've gone through all digits
                return carryOver.root;

                                        // don't need rem if we found root
                                        // so do it after if().
            carryOver.remainder = rq - carryOver.root;
            return recursionStep(strRep, carryOver);
        }
    }
}

unsigned long long sqrt(unsigned long long square)
{
    string strRep = to_string(square);

                                // return and pop out first 1 or 2
                                // digits of strRep
    size_t p = nFirstDigits(2 - strRep.size() % 2, &strRep);
    size_t sqrtDict[100];
                            // This is a "Dictionary" for the first 100
                            // squares and their roots.
                            // unsigned long long sqrtDict[100];
    for (size_t idx = 0, power = 1; idx != 100; ++idx)
    {
        if (idx < power*power)
            sqrtDict[idx] = power - 1;
        else
        {
            sqrtDict[idx] = power;
            ++ power;
        }
    }

    POD carryOver;                      // init our POD struct
    carryOver.root = sqrtDict[p];

    if (strRep.empty())                 // If weve gone through all digits
         return carryOver.root;

    carryOver.remainder = p - sqrtDict[p];

                                // Call the recursion function for the next
                                // iteration. Different function because its
                                // nicer to work with strings which are not
                                // an input of this one
    return recursionStep(strRep, carryOver);
}

size_t nFirstDigits(size_t n, string* number)
{
    string numberCopy = *number;

    if (numberCopy.size() < n)
        numberCopy.insert(0, 1, '1');

    reverse(&numberCopy);
    string digitsStr;
    for (size_t idx = 0; idx != n; ++idx)
    {
        char const digit = numberCopy[numberCopy.size() - 1];
        digitsStr.append(1, digit);
        numberCopy.pop_back();
    }
    reverse(&numberCopy);
    *number = numberCopy;
    return stoi(digitsStr);
}

void reverse(string* toRev)
{
    string const toIter = *toRev;
    string reversed;

        for (size_t idx = toIter.length(); idx != 0; idx--)
        {
           reversed.append(1, toIter[idx-1]);
        }

    *toRev = reversed;
    return;
}
