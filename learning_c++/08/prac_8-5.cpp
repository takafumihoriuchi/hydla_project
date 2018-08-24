#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
	char *p;
	int len;
public:
	strtype(char *ptr);
	~strtype() {delete [] p;}
	friend ostream &operator<<(ostream &stream, strtype &obj);
};

strtype::strtype(char *ptr) {
	len = strlen(ptr) + 1;
	p = new char [len];
	if (!p) {
		cout << "failed to allocate memory\n";
		exit(1);
	}
	strcpy(p, ptr);
}

ostream &operator<<(ostream &stream, strtype &obj) {
	stream << obj.p;
	return stream;
}


int main()
{
	strtype s1((char *)"Printing M.Ackerman right now."), s2((char *)"I like AoT.");
	cout << s1 << ' ' << s2 << endl;

	return 0;
}