#include <iostream>
#include <cstring>
using namespace std;

class my_base {
	char str[80];
public:
	my_base(char *s) {strcpy(str, s);}
	char *get() {return str;}
};

class my_derived : public my_base {
	int len;
public:
	my_derived(char *s) : my_base(s) {
		len = strlen(s);
	}
	int get_len() {return len;}
	void show() {cout << this->get() << endl;}
};

int main()
{
	my_derived obj((char *)"Hello from New York.");
	obj.show();
	cout << obj.get_len() << endl;

	return 0;
}