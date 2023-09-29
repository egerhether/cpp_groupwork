#include "cppmath.ih"

                                        // nextDigits is the next pair of digits
                                        // rem is the remainder
                                        // b is as denoted in the exercise

unsigned long long recursionStep(string strRep, POD carryOver)
{
    size_t const nextDigits = nFirstDigits(2, &strRep);

                            // Append the remainder to the left of next digits
    unsigned long long const remNextDigits = carryOver.remainder * pow(10, 2) + nextDigits;
    unsigned long long bEst = remNextDigits / 20 * carryOver.root;  // Estimate for b

    while (true)                        // runs indefinitely until we return
                                        // something
    {
        if (2 * 10 * carryOver.root * bEst + bEst * bEst > remNextDigits)
            --bEst;                        // if bigger than goal, decrement b
        
        else                                // We found b
        {
            carryOver.root  = carryOver.root * 10 + bEst;
            
            if (strRep.empty())         // if we've gone through all digits
                return carryOver.root;

                                        // don't need rem if we found root
                                        // so do it after if().
            carryOver.remainder = remNextDigits - carryOver.root; 
            return recursionStep(strRep, carryOver);
        }
    }
}

