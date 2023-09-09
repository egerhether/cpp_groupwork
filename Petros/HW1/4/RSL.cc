#include<iostream>

namespace {				//anonymous namespace
char const myString[]=			//Defining the RSL
					//We use delimiter as a marker to
					//deal with "( and )" in the str
R"delimiter(				
^\s+Encryption key:(\w+)
^\s+Quality=(\d+)
^\s+E?SSID:"([[:print:]]+)"
^\s+ssid="([[:print:]]+)"

)delimiter";
};	
	
int main()
{
	std::cout << myString;
		     		     
}
