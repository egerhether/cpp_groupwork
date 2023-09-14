#include <iostream>
#include <string>
#include <bitset>
#include<algorithm>
using namespace std;

int main(int argc, char *argv[])
{
    int  const value = stoi(argv[1]);                   //receives input
    string bitValue = bitset<32>(value).to_string();	//gets bitValue by 
							//converting to string
    cout << value << "=" << bitValue << "=";
    size_t power = 1;					//used for calculating
							//powers of 2 via 
							//repeated multipl.
    bool plus = false;					
    for(size_t idx = bitValue.size(); idx != 0; idx--)	//goes over the string
	{
	    if(bitValue[idx-1] == '1')			//checks if a bit is 
							//present in a given 
							//position
		{
		    if(plus)				//makes the + symbols
							//look nice
		    {	    
		    cout << "+";
		    } 
		    cout << power;
		    plus = true;
		}
 	    power *= 2;					//multiplies power by 
							//2 to get the current
							//power of 2 depending
							//on the index
	}
}
