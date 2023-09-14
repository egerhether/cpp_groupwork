#include <iostream> 
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    int  const value = stoi(argv[1]);			//defines constant value as the argument received from main
    size_t result = value;				//sets the initial result to be the value received as argument
    for(size_t idx = 1; idx != 11; ++idx)		//goes over all 10 numbers to be multiplied
    {
        cout << result << '\n';				
	result += value;				//adds the value to result (multiplication is repeated addition...)
    }							//this was done in an attempt to reduce complexity,
}							//as opposed to multiplying the value by idx each time
