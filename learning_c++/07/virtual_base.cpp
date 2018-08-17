#include <iostream>
using namespace std;

class base {
public:
	int i;
};

class derived1 : virtual public base {
public:
	int j;
};

class derived2 : virtual public base {
public:
	int k;
};

class derived3 : public derived1, public derived2 {
public:
	int product() {return i*j*k;}
};

int main()
{
	derived3 obj;
	obj.i = 2;
	obj.j = 3;
	obj.k = 4;
	cout << obj.product() << endl;

	return 0;
}