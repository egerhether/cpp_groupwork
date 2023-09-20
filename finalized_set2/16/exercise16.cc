#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char *argv[])
{        

    if (argc>1)                                       //failsafe to check if
                                                      //sufficient arguments
                                                      //are given
    {
        size_t const totalIter = stoi(argv[1]);       //sets the total nr of
                                                      //iterations to
                                                      //received arguments
        bool verbose = false;
        bool randomSeed = false;
        size_t hits;
        if (argc > 2)
        {                                               
            for (size_t charIdx = 0; argv[2][charIdx]; ++charIdx)   
            
                                                      //if second argument is
                                                      //given, checks if 'v'
                                                      //or 'r' are given
            {
                if (argv[2][charIdx] == 'v')
                    verbose = true;
                if (argv[2][charIdx] == 'v')
                    randomSeed = true;
            }
        }
    
        if (randomSeed)
            srandom(time(0));                          //uses time(0) as seed for
                                                       //random generator
        else
        srandom(0);             
        for (size_t iter = 0; iter != totalIter; ++iter)   
                                                       //the actual simulation
                                                       //running for the given
                                                       //nr of iterations
        {
            size_t selectedDoor = random()%3;          //sets the selected door
                                                       //and the prize door
                                                       //randomly
            size_t priceBehind = random()%3;
            size_t suggested;
            size_t openedDoor;
            for (size_t doorIdx = 0; doorIdx != 3; ++doorIdx)
                                                       //sets opened door to be
                                                       //not prize and not 
                                                       //selected door
           {
                if (selectedDoor != doorIdx && priceBehind != doorIdx)
                    openedDoor = doorIdx;
           } 
           for (size_t doorIdx = 0; doorIdx != 3; ++doorIdx)         
                                                       //sets suggested door
                                                       //as not selected and not
                                                       //opened door
           {
               if (selectedDoor != doorIdx && openedDoor != doorIdx)
                  suggested = doorIdx;
           }
           if (suggested == priceBehind)               //as required by the ex.
                                                       //we always choose the 
                                                       //suggested door
           {
               ++hits;                                 //if the prize is behind
                                                       //the suggested door,
                                                       //adds a hit to
                                                       //the counter
           }
            if (verbose)                       
                                                       //more sophisticated
                                                       //output if verbose
                                                       //is enabled
            {
                cout << "selected: " << selectedDoor << ", prize behind: " <<
                priceBehind << ", opened:" << openedDoor << ", suggested: "
                << suggested << '\n';
            }    
        }                   
                                                      //computes and outputs
                                                      //the hit percentage,
                                                      //total iterations, hits
    const double hitPercent = static_cast<double>(hits)/totalIter * 100;
    cout << "#iterations: " << totalIter << ", #hits: " << hits
    << ", hit percentage: " << hitPercent << '\n'; 

    }
    else
    {
        cout << "Incorrect or not enough arguments provided." << '\n';
        return 1;
    }
}
