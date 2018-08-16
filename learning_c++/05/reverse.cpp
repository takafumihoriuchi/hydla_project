#include <iostream>
#include <cstring>
using namespace std;

char *reverse(char *s, int n=0) {
	cout << s << endl;

	int len = strlen(s);

	cout << len << endl;

	char *p, *pp;
	
	p = new char [len+1]; // 結果を格納するためのメモリ領域を確保
	if (!p) {
		cout << "failed to allocate memory" << endl;
		exit(1);
	}
	
	cout << &p << endl;
	cout << &pp << endl;
	pp = p;
	cout << &pp << endl;

	// cout << "Hey there, what\'s the matter?" << endl;
	// exit(1);

	int i;
	// nが指定されていない場合
	if (!n) {
		for (i=len-1; i>=0; i--) {
			// cout << p << " " << s[i] << endl;
			*p = s[i];
			p++;
		}
	} else { // nが指定されている場合
		for (i=0; i<n; i++) {
			p[i] = s[n-i-1];
		}
		for (i=n; i<len; i++) {
			p[i] = s[i];
		}
	}

	return pp;
}

int main()
{
	char *sent = (char *)"Hello, this is Helen.";
	cout << reverse(sent) << endl;
	return 0;
}