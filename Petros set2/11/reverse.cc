#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	cout << "type the file location you want to reverse\n";
	string location;
	cin >> location;	
	ifstream in (location);
	string file;
	in >> file;
	cout << file << '\n';
}
