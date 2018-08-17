#include <iostream>
using namespace std;

class building {
protected:
	int floors;
	int rooms;
	double footage;
};

class house : public building {
	int bedrooms;
	int bathrooms;
public:
	house(int f, int r, double ft, int br, int bth) {
		floors = f; rooms = r; footage = ft; bedrooms = br; bathrooms = bth;
	}
	void show() {
		cout << "floors: " << floors << endl;
	}
};


int main()
{
	house obj(3,8,110.0,1,2);
	obj.show();

	return 0;
}