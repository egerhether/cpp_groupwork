#include "cppmath.ih"

unsigned long long sqrt(unsigned long long square)
{
    string strRep = to_string(square);

                                // return and pop out first 1 or 2
                                // digits of strRep
    size_t digitPair = nFirstDigits(2 - strRep.size() % 2, &strRep);
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
    carryOver.root = sqrtDict[digitPair];

    if (strRep.empty())                 // If weve gone through all digits
         return carryOver.root;
    
    carryOver.remainder = digitPair - sqrtDict[digitPair];

                                // Call the recursion function for the next
                                // iteration. Different function because its
                                // nicer to work with strings which are not
                                // an input of this one
    return recursionStep(strRep, carryOver);
}
