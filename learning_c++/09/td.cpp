#include <iostream>
#include <ctime>
using namespace std;

ostream &td(ostream &stream) {
	struct tm *localt;
	time_t t;

	t = time(NULL);
	localt = localtime(&t);
	stream << asctime(localt);

	return stream;
}

int main()
{
	cout << td;
	return 0;
}