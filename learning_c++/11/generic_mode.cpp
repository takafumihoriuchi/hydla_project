#include <iostream>
using namespace std;

template <typename type>
type mode(type *arr, int len) {
	type ans = arr[0];
	int max_count = 0;
	int i, j;
	for (i=0; i<len; i++) {
		int count = 0;
		for (j=i; j<len; j++) {
			if (arr[i] == arr[j]) {
				count++;
			}
		}
		if (count > max_count) {
			max_count = count;
			ans = arr[i];
		}
	}
	return ans;
}

int main()
{
	int int_arr[10] = {5,7,7,3,7,5,5,6,7,2};
	double d_arr[4] = {1.1, 3.2, 1.1, 4.5};
	char *s_arr = (char *)"damn-shit is a diiiiiirty-language;dont use it";
	cout << mode(int_arr, 10) << endl;
	cout << mode(d_arr, 4) << endl;
	cout << mode(s_arr, 57) << endl;
	return 0;
}
