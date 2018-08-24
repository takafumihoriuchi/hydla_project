#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream mystream("test.txt");
	// mystream.open("test.txt");

	if (!mystream.is_open()) {
		cout << "unable to open file" << endl;
	}


	mystream << "hello world! I'm in the library, and it's quarter to four.";


	mystream.close();

	return 0;
}
