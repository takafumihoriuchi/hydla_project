#include <iostream>
using namespace std;

istream &skipchar(istream &stream) {
	char c;
	for (int i=0; i<10; i++) cin >> c;
	return stream;
}

int main()
{
	char bunsyou[80];
	cout << "input a bunsyou: ";
	cin >> skipchar >> bunsyou;
	cout << bunsyou << endl;

	return 0;
}