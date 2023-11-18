#include "calculator.ih"

bool calculator::expression()
{
                                // To get the left and right values and the
                                // operator from the line
    for (int idx = 0, opos = 0, oposPrev, on; idx != 3; ++idx)
    {
        oposPrev = opos;                        // save prev space position
        opos = d_line.find(' ', opos) + 1;      // position of the next space
        on = opos - oposPrev - 1;               // difference - 1
                                                
                                // get a substring from oposPrev to opos - 1
                                // i.e. in the case string = "a + b" get "a"
                                // on the first iteration
        string const input = d_line.substr(oposPrev, on);
        
                                // If there are no characters after we extract
                                // the rightmost value 'on' will be less than 0
                                // as opos will be less than oposPrev;
                                // Otherwise 'on' will be larger than 0 and the
                                // format incorrect. We test for this case.
        if (idx == 2 && on > 0)
        {
            cout << "Error: Invalid format\n";
            return false;
        }
    
        if (!expressionSwitch(idx, input))
            return false;
    } 
return true;
}
