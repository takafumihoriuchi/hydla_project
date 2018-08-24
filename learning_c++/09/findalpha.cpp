#include <iostream>
#include <cctype>
using namespace std;

istream &findalpha(istream &stream) {
	char c;
	do {
		stream.get(c);	
	} while (!isalpha(c));
	stream.putback(c);
	return stream;
}

int main()
{
	char str[80];
	cin >> findalpha >> str;
	cout << str << endl;
	return 0;
}