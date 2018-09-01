#include <iostream>
using namespace std;

#define SIZE 10

template <typename type>
class queue {
	type que[SIZE];
	int top, bottom;
public:
	queue() {top = bottom = 0;}
	void push(type item);
	type pop();
};

template <typename type>
void queue<type>::push(type item) {
	if (this->top - this->bottom == SIZE) {cout << "stack is full\n"; return;}
	que[top % SIZE] = item;
	top++;
}

template <typename type>
type queue<type>::pop() {
	if (this->top == this->bottom) {cout << "stack is empty\n"; return 0;}
	bottom++;
	return que[(bottom-1) % SIZE];
}

int main()
{
	queue<char> char_queue;
	char_queue.push('a');
	char_queue.push('c');
	char_queue.push('e');
	char_queue.push('d');
	char_queue.push('r');
	for (int i=0; i<5; i++) {cout << char_queue.pop() << ' ';}
	cout << endl;

	queue<int> int_queue;
	int_queue.push(1);
	int_queue.push(2);
	int_queue.push(6);
	int_queue.push(7);
	int_queue.push(100);
	for (int i=0; i<5; i++) {cout << int_queue.pop() << ' ';}
	cout << endl;

	return 0;
}
