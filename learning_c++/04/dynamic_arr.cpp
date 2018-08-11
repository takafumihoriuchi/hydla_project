// new演算子とdelete演算子の単純な例
#include <iostream>
using namespace std;

int main()
{
	int *p;

	p = new int [5];

	if (!p) {
		cout << "メモリ割り当てエラー" << endl;
		return 1;
	}

	int i;

	for (i=0; i<5; i++) p[i] = i;

	for (i=0; i<5; i++) {
		cout << "int p[" << i << "]: ";
		cout << p[i] << "\n";
	}

	delete [] p; // メモリを解放する

	return 0;
}
