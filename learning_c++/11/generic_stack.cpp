#include <iostream>
using namespace std;

#define SIZE 10

template <class StackType>
class stack {
	StackType stck[SIZE][2];
	int tos;
public:
	void init() {tos = 0;}
	void push(StackType ob, StackType ob2);
	StackType pop(StackType &ob2);
};

template <class StackType>
void stack<StackType>::push(StackType ob, StackType ob2) {
	if (tos == SIZE) {
		cout << "stack is full\n";
		throw tos;
	}
	stck[tos][0] = ob;
	stck[tos][1] = ob2;
	tos++;
}

template <class StackType>
StackType stack<StackType>::pop(StackType &ob2) {
	if (tos == 0) {
		cout << "stack is empty\n";
		throw tos;
	}
	tos--;
	ob2 = stck[tos][1];
	return stck[tos][0];
}

int main()
{
	stack<double> ds1, ds2;

	ds1.init();
	ds2.init();

	try {
		ds1.push(1.1, 2.0);
		ds2.push(2.2, 3.0);
		ds1.push(3.3, 4.0);
		ds2.push(4.4, 5.0);
		ds1.push(5.5, 6.0);
		ds2.push(6.6, 7.0);
		ds2.push(6.6, 7.0);
		ds2.push(6.6, 7.0);
		ds2.push(6.6, 7.0);
		ds2.push(6.6, 7.0);
		ds2.push(6.6, 7.0);
		ds2.push(6.6, 7.0);
		ds2.push(6.6, 7.0);
		ds2.push(6.6, 7.0);

		for (int i=0; i<3; i++) {
			double d;
			cout << "pop ds1: " << ds1.pop(d);
			cout << ' ' << d << endl;
		}

		for (int i=0; i<3; i++) {
			double d;
			cout << "pop ds2: " << ds2.pop(d);
			cout << ' ' << d << endl;
		}
	}

	catch (...) {
		cout << "failed to either push-to or pop-from stack" << endl;
	}

	return 0;

}