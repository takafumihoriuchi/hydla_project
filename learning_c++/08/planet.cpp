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
		circumference = 2 * this->distance * 3.14;
	}
	friend ostream &operator<<(ostream &stream, earth obj);
};

ostream &operator<<(ostream &stream, earth obj)
{
	stream << "distance: " << obj.distance << endl;
	stream << "revolve: " << obj.revolve << endl;
	stream << "circumference: " << obj.circumference << endl;

	return stream;
}

int main()
{
	earth obj(93000000, 365);
	cout << obj;

	return 0;
}