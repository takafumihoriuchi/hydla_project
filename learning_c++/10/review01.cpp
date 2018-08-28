#include <iostream>
#include <cstdlib>
#include <cctype>
using namespace std;


class list {
public:
	list *head;
	list *tail;
	list *next;
	int num;
	list() { head = tail = next = NULL; }
	virtual void store(int i) = 0;
	virtual int retrieve() = 0;
	int operator--(int unused);
	int operator--();
};

int list::operator--(int unused) {
	return this->retrieve();
}

int list::operator--() {
	return this->retrieve();
}


class queue : public list {
public:
	void store(int i);
	int retrieve();
	queue operator+(int i) {this->store(i); return *this;}
};

void queue::store(int i) {
	list *item = new queue;
	if (!item) { cout << "failed to allocate memory\n"; exit(1); }
	item->num = i;
	if (this->tail != NULL) this->tail->next = item;
	this->tail = item;
	item->next = NULL;
	if (this->head == NULL) this->head = this->tail;
}

int queue::retrieve() {
	int i;
	list *p;
	if (this->head == NULL) { cout << "list is empty\n"; return 0; }
	i = this->head->num;
	p = this->head;
	this->head = this->head->next;
	delete p;
	return i;
}


class stack : public list {
public:
	void store(int i);
	int retrieve();
	stack operator+(int i) {this->store(i); return *this;}
};

void stack::store(int i) {
	list *item = new stack;
	if (!item) { cout << "failed to allocate memory\n"; exit(1); }
	item->num = i;
	if (this->head != NULL) item->next = this->head;
	this->head = item;
	if (this->tail == NULL) this->tail = item;
}

int stack::retrieve() {
	int i;
	list *p = this->head;
	if (p == NULL) { cout << "list is empty\n"; return 0; }
	i = this->head->num;
	this->head = p->next;
	delete p;
	return i;
}



class sort : public list {
public:
	void store(int i);
	int retrieve();
	sort operator+(int i) {this->store(i); return *this;}
};

void sort::store(int i) {
	list *item = new sort;
	if (!item) { cout << "failed to allocate memory\n"; exit(1); }
	item->num = i;

	// if list was empty, simply store it and return
	if (this->head == NULL && this->tail == NULL) {
		this->head = item;
		this->tail = item;
		return;
	}

	// if list is not empty, find the right position and insert
	list *p = this->head;
	list *prev = NULL;
	while (1) {
		if (item->num > p->num) {
			prev = p;
			p = p->next; // go on to the next node
			if (p == NULL) {
				prev->next = item;
				this->tail = item;
				break;
			}
		} else {
			// insert item there
			item->next = p;
			if (prev == NULL) {
				this->head = item;
			} else {
				prev->next = item;
			}
			break;
		}
	}

}

int sort::retrieve() {
	int i;
	list *p = this->head;
	if (p == NULL) { cout << "list is empty\n"; return 0; }
	i = this->head->num;
	this->head = p->next;
	delete p;
	return i;
}



int main()
{
	list *p;

	// demo of queue
	queue obj_q;
	p = &obj_q;
	p->store(1);
	p->store(2);
	p->store(3);
	obj_q + 7 + 9;
	cout << "queue: ";
	cout << p->retrieve() << ' ';
	cout << p->retrieve() << ' ';
	cout << p->retrieve() << ' ';
	cout << --obj_q << ' ';
	cout << obj_q--;
	cout << endl;

	// demo of stack
	stack obj_s;
	p = &obj_s;
	p->store(1);
	p->store(2);
	p->store(3);
	obj_s + 7;
	cout << "stack: ";
	cout << p->retrieve() << ' ';
	cout << p->retrieve() << ' ';
	cout << p->retrieve() << ' ';
	cout << --obj_s;
	cout << endl;
	// for some reason, does not output as expected when writing:
	// cout << p->retrieve() << p->retrieve() << p->retrieve() << endl;

	// demo of sort
	sort obj_sort;
	p = &obj_sort;
	p->store(7);
	p->store(2);
	p->store(4);
	p->store(6);
	p->store(5);
	p->store(1);
	p->store(9);
	p->store(11);
	obj_sort + 77;
	cout << "sort: ";
	cout << p->retrieve() << ' ';
	cout << p->retrieve() << ' ';
	cout << p->retrieve() << ' ';
	cout << p->retrieve() << ' ';
	cout << p->retrieve() << ' ';
	cout << p->retrieve() << ' ';
	cout << p->retrieve() << ' ';
	cout << p->retrieve() << ' ';
	cout << --obj_sort;
	cout << endl;

	return 0;
}
