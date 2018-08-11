#include <iostream>
#include <cstdlib>
using namespace std;


class a_type {
	double a, b;
public:
	a_type(double x, double y) {
		a = x;
		b = y;
	}
	void show() {cout << a << ' ' << b << endl;}
	int get_a() {return a;}
	int get_b() {return b;}
};
// このクラスを使用して、２行５列の２次元配列を作成する。
// 配列内の各オブジェクトに任意の初期値を設定する。
// 配列の内容を表示する。

class array {
	int size_row;
	int size_col;
	char **p;
public:
	array(int row, int col);
	~array() {delete [] p;}
	char &put(int row, int col);
	char get(int row, int col);
};


array::array(int row, int col) {
	p = new char *[row];
	if (!p) {
		cout << "failed to allocate memory" << endl;
		exit(1);
	}
	int i;
	for (i=0; i<row; i++) {
		char *pp;
		pp = new char [col];
		if (!pp) {
			cout << "failed to allocate memory" << endl;
			exit(1);
		}
		p[i] = pp;
	}
	size_row = row;
	size_col = col;
}


char &array::put(int row, int col) {
	if (row<0 || row>size_row-1 || col<0 || col>size_col-1) {
		cout << "boundary error\n";
		exit(1);
	}
	return p[row][col];
}


char array::get(int row, int col) {
	if (row<0 || row>size_row-1 || col<0 || col>size_col-1) {
		cout << "boundary error\n";
		exit(1);
	}
	return p[row][col];
}


void init_arr(array *arr, int row, int col) {
	int i, j;
	for (i=0; i<row; i++) {
		for (j=0; j<col; j++) {
			arr->put(i,j) = char(int('A')+i*(col-1)+j);
		}
	}
}

void show_arr(array *arr, int row, int col) {
	int i, j;
	for (i=0; i<row; i++) {
		for (j=0; j<col; j++) {
			cout << i << ' ' << j << ' ' << arr->get(i,j) << endl;
		}
	}
}


int main()
{
	a_type my_obj(2,5);
	my_obj.show();
	cout << "----------\n";
	array my_arr(int(my_obj.get_a()), int(my_obj.get_b()));
	init_arr(&my_arr, int(my_obj.get_a()), int(my_obj.get_b()));
	show_arr(&my_arr, int(my_obj.get_a()), int(my_obj.get_b()));
	return 0;
}
