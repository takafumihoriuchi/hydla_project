#include <iostream>
#include <ctime>
using namespace std;

class timer {
	clock_t start;
public:
	timer();
	~timer();
};

timer::timer() {
	start = clock();
}

timer::~timer() {
	clock_t end;
	end = clock();
	cout << "start: " << start << endl;
	cout << "end  : " << end << endl;
	cout << "CLOCKS_PER_SEC: " << CLOCKS_PER_SEC << endl;
	cout << "elapsed time: " << (end - start) << endl;
	// (end - start) / CLOCKS_PER_SEC では、うまくいっていない。
}

int main()
{
	timer ob;
	char c;
	cout << "input something: ";
	cin >> c;

	return 0;
}