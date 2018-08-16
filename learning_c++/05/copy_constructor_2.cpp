#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
	char *p;
public:
	strtype(char *s);
	strtype(const strtype &a);
	~strtype();
	char *get();
};

strtype::strtype(char *s) {
	int l = strlen(s) + 1;
	p = new char [l];
	if (!p) {
		cout << "failed to allocate memory" << endl;
		exit(1);
	}
	strcpy(p, s);
}

strtype::strtype(const strtype &a) {
	int l = strlen(a.p) + 1;
	p = new char [l];
	if (!p) {
		cout << "failed to allocate memory" << endl;
		exit(1);
	}
	strcpy(p, a.p);
}

strtype::~strtype() {
	delete [] p;
}

char *strtype::get() {
	return p;
}

void show(strtype x) {
	char *s;
	s = x.get();
	cout << s << endl;
}

int main()
{
	strtype a((char *)"Hey,"), b((char *)"there.");
	show(a);
	show(b);
	return 0;
}