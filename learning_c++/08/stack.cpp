#include <iostream>
using namespace std;

#define SIZE 10

class stack {
	int stk[SIZE];
	int tos;
public:
	stack();
	void push(int n);
	int pop();
	friend ostream &operator<<(ostream &stream, stack obj);
};

stack::stack() {
	tos = 0;
}

void stack::push(int n) {
	if (tos == SIZE) {
		cout << "stack overflow!!\n";
		return;
	}
	stk[tos] = n;
	tos++;
}

int stack::pop() {
	if (tos == 0) {
		cout << "stack underflow!!\n";
		return 0;
	}
	tos--;
	return stk[tos];
}

ostream &operator<<(ostream &stream, stack obj) {
	cout << "---" << endl;
	int i;
	for (i=0; i<SIZE; i++) {
		cout << obj.stk[i] << endl;
	}
	cout << "---" << endl;
	return stream;
}

int main()
{
	stack a;
	a.push(1);
	a.push(4);
	a.push(25);
	a.push(90);
	a.push(51);
	a.push(12);
	a.push(7);
	a.push(7);
	a.push(1);
	a.push(99);
	cout << a;

	return 0;
}