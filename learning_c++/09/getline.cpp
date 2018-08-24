#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char str[80];

	cout << "what's your name? : ";
	// cin.getline(str, 79);
	// cin.get(str, 79, '\n');
	cin.get(str, 79);

	cout << str << endl;

	return 0;
}

/*
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char str[80];

	cout << "what's your name? : ";
	cin.getline(str, 79);

	cout << str << endl;

	return 0;
}
*/