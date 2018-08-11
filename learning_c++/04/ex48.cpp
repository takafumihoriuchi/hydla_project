// safe-[MULTI-DIMENSION]-array

#include <iostream>
#include <cstdlib>
using namespace std;


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


int main()
{
	array a(2,3);
	a.put(0,0) = 'X';
	a.put(1,2) = 'R';
	cout << a.get(0,0) << a.get(1,2) << endl;
	a.put(10,3);
	return 0;
}
