#include <iostream>
using namespace std;

void recip(double &num) {
	num = 1/num;
}

int main()
{
	double num = 1.2;
	cout << "inverse of " << num << " is "; 
	recip(num);
	cout << num << endl;
	return 0;
}