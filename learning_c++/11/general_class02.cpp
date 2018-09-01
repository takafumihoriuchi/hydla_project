#include <iostream>
using namespace std;

#define SIZE 10

template <typename type>
class stack {
	type stk[SIZE];
	int tos;
public:
	stack() {tos = 0;}
	void push(type item);
	type pop();
};

template <typename type>
void stack<type>::push(type item) {
	if (this->tos == SIZE) {cout << "stack is full\n"; return;}
	stk[tos] = item;
	tos++;
}

template <typename type>
type stack<type>::pop() {
	if (this->tos == 0) {cout << "stack is empty\n"; return 0;}
	tos--;
	return stk[tos];
}

int main()
{
	stack<char> char_stack;
	char_stack.push('a');
	char_stack.push('c');
	char_stack.push('e');
	char_stack.push('d');
	char_stack.push('r');
	for (int i=0; i<5; i++) {cout << char_stack.pop() << ' ';}
	cout << endl;

	stack<int> int_stack;
	int_stack.push(1);
	int_stack.push(2);
	int_stack.push(6);
	int_stack.push(7);
	int_stack.push(100);
	for (int i=0; i<5; i++) {cout << int_stack.pop() << ' ';}
	cout << endl;

	return 0;
}