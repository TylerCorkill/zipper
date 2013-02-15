#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iterator>

using namespace std;

int main()
{
	string location, destination;

	cout << "\nFile location: ";
	cin >> location;
	cout << "\nFile destination: ";
	cin >> destination;

	ifstream source(location.c_str(), ios::binary);
	ofstream dest(destination.c_str(), ios::binary);

	istreambuf_iterator<char> begin_source(source);
	istreambuf_iterator<char> end_source;
	ostreambuf_iterator<char> begin_dest(dest);
	copy(begin_source, end_source, begin_dest);

	source.close();
	dest.close();
}