#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
	char *p;
	int len;
public:
	strtype(char *s);
	strtype();
	~strtype() {cout << "RELEASING: " << p << endl; delete [] p;}
	char *get() {return p;}
	strtype &operator=(strtype &obj);
	strtype &operator=(char *str);
	strtype operator+(strtype &obj);
	int operator>(strtype &obj);
	int operator<(strtype &obj);
	int operator==(strtype &obj);
};

strtype::strtype(char *s) {
	int l = strlen(s) + 1;
	p = new char [l];
	if (!p) {cout << "failed to allocate memory\n"; exit(1);}
	len = l;
	strcpy(p,s);
}

strtype::strtype() {
	int len = 1;
	p = new char [len];
	if (!p) {cout << "failed to allocate memory\n"; exit(1);}
	strcpy(p, "");
}

strtype &strtype::operator=(strtype &obj) {
	if (len < obj.len) {
		delete [] p;
		p = new char [obj.len];
		if (!p) {cout << "failed to allocate memory\n"; exit(1);}
	}
	len = obj.len;
	strcpy(p, obj.p);
	return *this;
}

strtype &strtype::operator=(char *str) {
	if (this->len < strlen(str)) {
		delete [] p;
		p = new char [strlen(str) + 1];
		if (!p) {cout << "failed to allocate memory\n"; exit(1);}
	}
	this->len = strlen(str);
	strcpy(p, str);
}

strtype strtype::operator+(strtype &obj) {
	strtype tmp;
	tmp.len = this->len + obj.len - 1;
	tmp.p = new char [tmp.len];
	if (!tmp.p) {cout << "failed to allocate memory\n"; exit(1);}
	// fill character to memory block
	int i, j;
	for (i=0; i < this->len - 1; i++) tmp.p[i] = this->p[i];
	for (j=0; j < obj.len; i++, j++) tmp.p[i] = obj.p[j];
	return tmp;
}

int strtype::operator>(strtype &obj) {
	return (this->len > obj.len);
}

int strtype::operator<(strtype &obj) {
	return (this->len < obj.len);
}

int strtype::operator==(strtype &obj) {
	return (this->len == obj.len);
}

int main()
{
	strtype a((char *)"Seid ihr das Essen?");
	strtype b((char *)"Nein, wir sind der Jäger!");

	cout << "a: " << a.get() << endl;
	cout << "b: " << b.get() << endl;

	// concatinate
	cout << "a + b: " << (a + b).get() << endl;

	// substitute
	a = b;
	cout << "a = b:" << endl;
	cout << "a: " << a.get() << endl;
	cout << "b: " << b.get() << endl;

	// not initializing
	strtype c;
	// c = a;
	// cout << "c: " << c.get() << endl;
	c = (char *)"Feiern wir dieser Sieg fur den Sieges Kampf!";
	cout << "c: " << c.get() << endl;

	if (a == b) cout << "len(a) == len(b)" << endl;
	else cout << "len(a) != len(b)" << endl;

	if (a > c) cout << "len(a) > len(c)" << endl;
	else cout << "len(a) <= len(c)" << endl;

	return 0;
}
