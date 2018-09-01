#include <iostream>
using namespace std;

template <typename type>
type *genbubble(type *arr, int len) {
	int limit, now;
	for (limit=len-1; limit>0; limit--) {
		for (now=0; now<limit; now++) {
			if (arr[now] > arr[now+1]) {
				type tmp = arr[now];
				arr[now] = arr[now+1];
				arr[now+1] = tmp;
			}
		}
	}
	return arr;
}

int main()
{
	int int_arr[10] = {6,2,3,5,4,1,9,8,7,0};
	int i;
	for (i=0; i<10; i++) cout << int_arr[i] << ' ';
	cout << endl;
	genbubble(int_arr, 10);
	for (i=0; i<10; i++) cout << int_arr[i] << ' ';
	cout << endl;

	return 0;
}

/*

try {
	...
}

catch (type var) {
	
}

throw value

*/