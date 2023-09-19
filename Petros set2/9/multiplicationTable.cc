#include<iostream>
#include<string>

using namespace std;

int main(int argc, char* argv[])
{					// We use stoi to convert
	int const value = stoi(argv[1]);// our input to an int

					// Starting idx at 1, we initialize a
					// for loop stopping at idx = 11
					// incremented by 1 every iteration
					// to multiply our value by 1 to 10
	for (int idx = 1; idx != 11; ++idx)
	{				
					// We stream out the multiplication
					// table
		cout <<  idx << " * " << value  << " = " << idx * value 
		<< '\n';
	}
}
