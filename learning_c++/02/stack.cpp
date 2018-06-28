#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

#define SIZE 255

class strtype {
	char *p;
	int len;
public:
	strtype(); // constructor
	~strtype(); // destructor
	void set(char *ptr);
	void show();
};

strtype::strtype() {
	p = (char *)malloc(SIZE);
	if (!p) {
		cout << "failed to allocate memory\n";
		exit(1);
	}
	*p = '\0';
	len = 0;
}

strtype::~strtype() {
	cout << "released 'p'\n";
	free(p);
}

void strtype::set(char *ptr) {
	if (strlen(ptr) >= SIZE) {
		cout << "input oversized\n";
		return;
	}
	strcpy(p, ptr);
	len = strlen(p);
}

void strtype::show() {
	cout << p << " - length: " << len << endl;
}

int main() {
	strtype ob;
	ob.set("Bitter Sweet Chocolate");
	ob.show();

	return 0;
}