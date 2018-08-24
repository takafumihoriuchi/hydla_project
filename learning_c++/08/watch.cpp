#include <iostream>
#include <ctime>
using namespace std;

class watch {
	time_t t;
public:
	watch() {t = time(NULL);}
	friend ostream &operator<<(ostream &stream, watch obj);
};

ostream &operator<<(ostream &stream, watch obj) {
	struct tm *localt;
	localt = localtime(&obj.t);
	stream << asctime(localt) << endl;

	return stream;
}

int main()
{
	watch t;
	cout << t;

	return 0;
}