#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
	// int a;
	// char a;
	// double a;
	// bool a;
	// char *a;
	// int *a;
	// float a;
	// float *a;
	double *a;
	float *b;
	// cout << typeid(a).name() << endl;
	cout << (typeid(a) == typeid(b)) << endl;
	return 0;
}