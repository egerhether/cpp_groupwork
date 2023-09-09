#include<iostream>

namespace {				//anonymous namespace
char const encryptionKey[]=		//Defining the RSL
R"(
^\s+Encryption key:(\w+)
)";

char const quality[]=
R"(
^\s+Quality=(\d+)
)";

char const ESSID[]=			//Here we define the RSL
					//between delimiter markers as to not
					//have problems with "( and )"
R"delimiter(
^\s+E?SSID:"([[:print:]]+)"
)delimiter";

char const SSID[]=
R"delimiter(
^\s+ssid="([[:print:]]+)"
)delimiter";
};	
	
int main()
{
	std::cout << encryptionKey << '\n' <<
		     quality	   << '\n' <<
     		     ESSID         << '\n' <<
		     SSID	   << '\n';
		     		     
}
