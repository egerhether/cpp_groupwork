#include <iostream>
#include <string>
using namespace std;


int main()
{
    bool success = false;				//used later to check
							//if nr was found
    for(size_t idx1 = 99; idx1 != 1000; ++idx1)		//goes over all numbers
							//requried by question
    {
        bool add32Test = false;				//used to check if the
							//nr passes both tests
        bool subtr13Test = false;
        for(size_t idx2 = 0; idx2 != idx1; ++idx2)	//tests each number up
							//to the one we are 
							//currently testing
						
        {
            size_t square = idx2*idx2;
            if(square == idx1+32)			//tests first square
							//requirements
            {
                add32Test = true;
            }
            if(square == idx1-13)			//tests second square
							//requirements
            {
                subtr13Test = true;
            }
        }
        if (add32Test && subtr13Test)			
        {
            cout << idx1 << " satisfies the requirements."<<'\n'; //prints
								  //the number
								  //if one was
								  //found
	    success = true;
	    return 0;
        }
        
    }
    
    if(!success)					//if no such number
							//was found
    {
	cout << "No number satisfying the requirements was found."<<'\n';
	return 1;
    }
    
}
