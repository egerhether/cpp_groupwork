#include "cppmath.ih"

                                        // q is the next pair of digits
                                        // r is the remainder
                                        // b is as denoted in the exercise

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

