#include <iostream>
using namespace std;

class planet {
protected:
	double distance;
	int revolve;
public:
	planet(double d, int r) {distance = d; revolve = r;}
};

class earth : public planet {
	double circumference;
public:
	earth(double d, int r) : planet(d, r) {
		circumference = r * 2 * 3.14;
	}
	void show() {
		cout << "(" << distance << "," << revolve << "," << circumference << ")\n";
	}
};

int main()
{
	earth obj(930000, 365);
	obj.show();

	return 0;
}