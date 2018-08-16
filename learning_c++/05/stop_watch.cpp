#include <iostream>
#include <ctime>
using namespace std;

class stopwatch {
	double begin, end;
public:
	stopwatch();
	stopwatch(clock_t t);
	~stopwatch();
	void start();
	void stop();
	void show();
};

stopwatch::stopwatch() {
	begin = end = 0.0;
}

stopwatch::stopwatch(clock_t t) {
	begin = (double) t / CLOCKS_PER_SEC;
	end = 0.0;
}

stopwatch::~stopwatch() {
	cout << "object " << this << " destructed\n";
}

void stopwatch::start() {
	begin = (double) clock() / CLOCKS_PER_SEC;
}

void stopwatch::stop() {
	end = (double) clock() / CLOCKS_PER_SEC;
}

void stopwatch::show() {
	cout << "ellapsed time: " << end - begin << endl;
}

int main()
{
	stopwatch obj1;
	obj1.start();
	for (int i = 0; i < 320000000; i++);
	obj1.stop();
	obj1.show();

	stopwatch obj2(clock());
	for (int i = 0; i < 250000000; i++);
	obj2.stop();
	obj2.show();

	return 0;
}

/*
#include <iostream>
#include <ctime>
using namespace std;


class stopwatch {
	time_t systime;
public:
	stopwatch() = {systime = clock();}
	stopwatch(time_t t);
	void show();
};

stopwatch::stopwatch(time_t t) {
	systime = t;
}

void stopwatch::show() {
	cout << ctime(&systime);
}


int main()
{
	time_t x;
	x = time(NULL);
	
	stopwatch obj1(x);
	obj1.show();

	stopwatch obj2();
	obj2.show();

	return 0;
}
*/