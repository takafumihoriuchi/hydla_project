#include <iostream>
#include <new>
using namespace std;

int main()
{
	int *p;
	try {
		p = new int;
	} catch (bad_alloc xa) {
		cout << "failed to allocate memory\n";
		return 1;
	}

	for (*p=0; *p<10; (*p)++) {
		// pの指しているメモリに格納されている値をインクリメントして行く。
		// pの指しているアドレスを変えている訳ではない点に注意。
		cout << *p << ' ';
	}
	cout << endl;

	return 0;
}