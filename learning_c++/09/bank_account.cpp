#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class account {
	int custnum;
	char name[80];
	double balance;
public:
	account(int cst, char *nm, double bl);
	friend ostream &operator<<(ostream &stream, account obj);
};

account::account(int cst, char *nm, double bl) {
	this->custnum = cst;
	strcpy(this->name, nm);
	this->balance = bl;
}

ostream &operator<<(ostream &stream, account obj) {
	stream << "口座番号：" << obj.custnum << endl;
	stream << "氏名　　：" << obj.name << endl;
	stream << "残高　　：" << obj.balance << endl;
	return stream;
}

int main()
{
	account levi(355261, (char *)"Levi Ackerman", 999.99);
	ofstream fout("bank_account", ios::out);
	if (!fout) {cout << "failed to open an bank account. sorry! :-D"; return 1;}
	fout << levi;
	fout.close();
	return 0;
}