#include<iostream>

int main()
{
	std::cout << "^\\s+Encryption key:(\\w+)"	<< '\n' <<
		     "^\\s+Quality=(\\d+)"		<< '\n' <<
		     "^\\s+E?SSID:\"([[:print:]]+)\""   << '\n' <<
		     "^\\s+ssid=\"([[:print:]]+)\""	<< '\n';
}	
