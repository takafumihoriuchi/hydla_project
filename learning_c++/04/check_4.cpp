#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
	char *p;
	int len;
public:
	strtype(char *ptr);
	~strtype();
	void show();
};

strtype::strtype(char *ptr) {
	len = strlen(ptr);
	p = new char [len+1];
	if (!p) {
		cout << "failed to allocate memory" << endl;
		exit(1);
	}
	strcpy(p, ptr);
}

strtype::~strtype() {
	cout << "releasing p" << endl;
	delete [] p;
}

void strtype::show() {
	cout << p << " - len: " << len << endl;
}

int main()
{
	strtype s1((char *)("As listening to Silly by Leo"));
	strtype s2((char *)("\"oh it's so silly ~\""));
	s1.show();
	s2.show();
	return 0;
}