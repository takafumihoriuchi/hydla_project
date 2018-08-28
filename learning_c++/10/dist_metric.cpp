#include <iostream>
#include <cmath>
using namespace std;

class dist {
protected:
	double d;
public:
	dist(double a, double b) {this->d = abs(a-b);}
	virtual double trav_time() {
		const double vel = 60.0; // mile
		return this->d / vel;
	}
};

class metric : public dist {
public:
	metric(double a, double b) : dist(a, b) {}
	double trav_time() {
		const double vel = 100.0; // km
		return this->d / vel;
	}
};

int main()
{
	dist objm(3.2, 9.8);
	metric objkm(1.2, 7.9);

	cout << objm.trav_time() << " miles" << endl;
	cout << objkm.trav_time() << " km" << endl;

	return 0;
}