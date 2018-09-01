// 引数の一つの指数がもう一つの引数になるまで累乗して返すgexp()という名前の汎用関数を作成しなさい。

#include <iostream>
using namespace std;

template <typename type>
type gexp(type a, type b)
{
	type result = 1;

	type i;
	for (i=0; i<b; i++)
		result *= a;

	return result;
}

int main()
{
	cout << gexp(2,3) << endl;
	cout << gexp(10.0, 2.0) << endl;

	return 0;
}
