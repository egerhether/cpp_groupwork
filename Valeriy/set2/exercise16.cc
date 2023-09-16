#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(int argc, char *argv[])
{
    bool verbose = false;
    bool randomSeed = false;
    size_t hits = 0;
    int totalIter = stoi(argv[1]);		      //takes total iterations
						      //from argument given

    if(argc>2)
    {
	for(size_t idx3 = 0; argv[2][idx3]; ++idx3)   //if second argument is
						      //given, checks if 'v'
						      //or 'r' are given
        {
            if(argv[2][idx3] == 'v')
                verbose = true;
            if(argv[2][idx3] == 'r')
                randomSeed = true;
        }
    }
    
    if(randomSeed = true)
        srandom(time(0));		 	      //uses time(0) as seed for
						      //random generator
    else
	srandom(0);				
    for(size_t iter = 0; iter != totalIter; ++iter)   //the actual simulation
						      //running for the given
						      //nr of iterations
    {
        const size_t selectedDoor = random()%3;	      //sets the selected door
						      //and the prize door
						      //randomly
        const size_t priceBehind = random()%3;
	size_t openedDoor;
	size_t suggested;
        for(size_t idx1 = 0; idx1 != 3; ++idx1)       //sets opened door to be
						      //not prize and not 
						      //selected door
        {
            if(selectedDoor != idx1 && priceBehind != idx1)
            {
                openedDoor = idx1;
            }
        } 
        for(size_t idx2 = 0; idx2 != 3; ++idx2)	      //sets suggested door
						      //as not selected and not
						      //opened door
        {
            if(selectedDoor != idx2 && openedDoor != idx2)
            {
                suggested = idx2;
            }
        }
        if(suggested == priceBehind)		      //as required by the ex.,
						      //we always choose the 
						      //suggested door
        {
            ++hits;				      //if the prize is behind
						      //the suggested door,
						      //adds a hit to
						      //the counter
        }
        if(verbose)				      //more sophisticated
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
