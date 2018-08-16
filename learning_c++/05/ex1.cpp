#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
	char *p;
	int len;
public:
	strtype();
	strtype(char *s, int l);
	char *getstring() {return p;}
	int getlength() {return len;}
};

strtype::strtype() {
	p = new char [255];
	if (!p) {
		cout << "failed to allocate memory" << endl;
		exit(1);
	}
	*p = '\0';
	len = 255;
}

strtype::strtype(char *s, int l) {
	if (strlen(s) >= l) {
		cout << "少なすぎるメモリの割り当て\n";
		exit(1);
	}
	p = new char [l];
	if (!p) {
		cout << "failed to allocate memory" << endl;
		exit(1);
	}	
	strcpy(p, s);
	len = l;
}


int main()
{
	strtype s1;
	strtype s2((char *)("This is a test"), 100);

	cout << "s1: " << s1.getstring() << " len: " << s1.getlength() << endl;
	cout << "s2: " << s2.getstring() << " len: " << s2.getlength() << endl;

	return 0;
}