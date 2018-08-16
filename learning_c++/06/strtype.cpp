#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
	char *p;
	int len;
public:
	strtype(char *s);
	~strtype() {cout << "releasing " << &p << endl; delete [] p;}
	char *get() {return p;}
	strtype &operator=(strtype &ob);
};

strtype::strtype(char *s) {
	int l = strlen(s) + 1;
	p = new char [l];
	if (!p) {cout << "failed to allocate memory\n"; exit(1);}
	len = l;
	strcpy(p,s);
}

strtype &strtype::operator=(strtype &ob) {
	if (len < ob.len) {
		delete [] p;
		p = new char [ob.len];
		if (!p) {cout << "failed to allocate memory\n"; exit(1);}
	}
	len = ob.len;
	strcpy(p,ob.p);
	return *this;
}

int main()
{
	strtype a((char *)"Hello, Girls!"), b((char *)"Hey, Guys!");

	cout << "a: " << a.get() << endl;
	cout << "b: " << b.get() << endl;

	a = b;

	cout << "a: " << a.get() << endl;
	cout << "b: " << b.get() << endl;

	return 0;
}