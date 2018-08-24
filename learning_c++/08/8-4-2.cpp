#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	// cout << hex << showbase << 100 << endl;
	cout << resetiosflags(ios::basefield) << setiosflags(ios::hex | ios::showbase) << 100 << endl;

	return 0;
}
