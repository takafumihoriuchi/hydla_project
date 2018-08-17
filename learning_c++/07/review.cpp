#include <iostream>
using namespace std;

class array {
	int nums[10];
public:
	array();
	void set(int n[10]);
	void show();
	// array operator+(array obj);
	// array operator-(array obj);
	// int operator==(array obj);
	friend array operator+(array obj1, array obj2);
	friend array operator-(array obj1, array obj2);
	friend int operator==(array obj1, array obj2);
	array operator++();
	friend void operator--(array &obj);
};

void operator--(array &obj) {
	int i;
	for (i=0; i<10; i++)
		obj.nums[i]--;
}

array array::operator++() {
	int i;
	for (i=0; i<10; i++)
		this->nums[i]++;
}

array::array() {
	int i;
	for (i=0; i<10; i++)
		nums[i] = 0;
}

void array::set(int *n) {
	int i;
	for (i=0; i<10; i++)
		nums[i] = n[i];
}

void array::show() {
	int i;
	for (i=0; i<10; i++)
		cout << nums[i] << " ";
	cout << endl;
}

array operator+(array obj1, array obj2) {
	array tmp;
	int i;
	for (i=0; i<10; i++)
		tmp.nums[i] = obj1.nums[i] + obj2.nums[i];
	return tmp;
}

array operator-(array obj1, array obj2) {
	array tmp;
	int i;
	for (i=0; i<10; i++)
		tmp.nums[i] = obj1.nums[i] - obj2.nums[i];
	return tmp;
}

int operator==(array obj1, array obj2) {
	int i;
	for (i=0; i<10; i++)
		if (obj1.nums[i] == obj2.nums[i])
			continue;
		else
			return 0;
	return 1;
}

/*
array array::operator+(array obj) {
	int tmp_array[10];
	int i;
	for (i=0; i<10; i++)
		tmp_array[i] = this->nums[i] + obj.nums[i];
	array tmp;
	tmp.set(tmp_array);
	// nums[i]に直接 書き込んでも良い
	return tmp;
}

array array::operator-(array obj) {
	int tmp_array[10];
	int i;
	for (i=0; i<10; i++)
		tmp_array[i] = this->nums[i] - obj.nums[i];
	array tmp;
	tmp.set(tmp_array);
	return tmp;
}

int array::operator==(array obj) {
	int i;
	for (i=0; i<10; i++)
		if (this->nums[i] == obj.nums[i])
			continue;
		else
			return 0;
	return 1;
}
*/

int main()
{
	array o1, o2, o3;
	int i[10] = {1,2,3,4,5,6,7,8,9,10};

	o1.set(i);
	o2.set(i);

	o3 = o1 + o2;
	o3.show();

	if (o1==o2) cout << "o1 == o2" << endl;
	else cout << "o1 != o2" << endl;

	if (o1==o3) cout << "o1 == o3" << endl;
	else cout << "o1 != o3" << endl;

	++o3;
	o3.show();

	--o3;
	o3.show();

	return 0;	
}
