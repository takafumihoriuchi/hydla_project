#include <iostream>
using namespace std;

class sample {
	int a;
protected:
	int b;
public:
	int c;
	sample(int n, int m) {a=n; b=m;}
	int get_a() {return a;}
	int get_b() {return b;}
};

int main()
{
	sample obj(2,3);
	obj.c = 4;
	cout << obj.get_a() << endl;
	cout << obj.get_b() << endl;
	cout << obj.c << endl;

	return 0;
}