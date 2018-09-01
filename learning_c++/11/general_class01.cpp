#include <iostream>
using namespace std;


template <typename data_t>
class list {
	data_t data;
	list *next;
public:
	list(data_t d);
	void add(list *node) {node->next = this; this->next = 0;}
	list *getnext() {return this->next;}
	data_t getdata() {return this->data;}
};

template <class data_t>
list<data_t>::list(data_t d) {
	this->data = d;
	this->next = 0;
}


int main()
{
	/*
	list<char> start('a');
	list<char> *p, *last;
	
	last = &start;

	int i;
	for (i=1; i<26; i++) {
		p = new list<char>('a' + i);
		p->add(last);
		last = p;
	}

	p = &start;

	while(p) {
		cout << p->getdata() << ' ';
		p = p->getnext();
	}
	cout << endl;
	*/

	list<int> start(1);
	list<int> *p, *last;
	
	last = &start;

	int i;
	for (i=1; i<26; i++) {
		p = new list<int>(1 + i);
		p->add(last);
		last = p;
	}

	p = &start;

	while(p) {
		cout << p->getdata() << ' ';
		p = p->getnext();
	}
	cout << endl;

	return 0;
}