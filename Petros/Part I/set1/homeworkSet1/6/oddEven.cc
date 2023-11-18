#include<iostream>

using namespace std;

int main()
{
	int value;
	cout << "input an integer:\n";
	cin >> value;			//we stream int into "value"
	
					//if division by 2 with remainder
					//is == 1 then value is odd
	cout << ((value % 2 == 1) ? "odd" : "even") << '\n';
	
					//As value is an int, dividing it by
					//2 truncates any fractional part,
					//acting as a division and floor fct
					//so if value is odd, this expression
					//will not be equal to value.
	cout << (((value / 2) + (value / 2)) == value 
		? "even" : "odd") << '\n';
					
					//we use the bitwise or operator
					//to compare our value to 1
					//(1 = 00b00...001 so it can be
					//compared bitwise to value)
					//meaning that all the digits
					//other than the last one will
					//remain the same, as 
					//they are compared to 0, 
					//while the last one will remain
					//the same if it is 1 or get
					//incremented by 1 if it is 0
					//(we compare it to 1) therefore
					//if value is odd its last digit 
					//is = 1 so value | 1 == value
					//otherwise value | 1 == value + 1
	cout << ((value | 1) == value ? "odd" : "even") << '\n';

					//we compare using the bitwise
					//and operator  our value and 1
					//(comparing all digits with 0 
					//except the last one which we
					//compare with 1)
					//meaning that the output
					//will be true (1) if
					//the last digit of our value is one
					//(in bin representation) iff
					//value is odd.
	cout << (value & 1 ? "odd" : "even") << '\n';

	}	
