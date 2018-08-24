#include <iostream>
using namespace std;

int main()
{
	ios::fmtflags f;
	f = cout.flags();
	
	cout.flags(f);
	cout << setioflags(f);

	return 0;
}