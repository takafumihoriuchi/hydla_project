#include <iostream>
#include <cstring>
using namespace std;

template <typename type>
type gen_sum(type *arr, int len) {
	int i;
	type sum = (type)0;
	for (i=0; i<len; i++) {
		sum += arr[i];
	}
	return sum;
}

int main()
{
	int int_arr[10] = {1,2,3,4,5,6,7,8,9,0};
	double d_arr[10] = {1.3,2.3,3.3,4.3,5.3,6.3,7.3,8.3,9.3,0.4};
	char *c_arr = (char *)"hello from the other side.";
	cout << gen_sum(int_arr, 10) << endl;
	cout << gen_sum(d_arr, 10) << endl;
	cout << gen_sum(c_arr, strlen(c_arr)) << endl;
	return 0;
}