#include <iostream>
using namespace std;

void Xhandler(int test) {
	try {
		if (test) throw test;
		else throw "アタイはゼロ：";
	}
	catch (...) {
		cout << "捕獲！あなたはスージーの" << endl;
	}
}

int main()
{
	cout << "開始！\n";

	Xhandler(1);
	Xhandler(2);
	Xhandler(0);
	Xhandler(3);

	cout << "狩猟！\n";
	return 0;
}

/*
#include <iostream>
using namespace std;

void Xhandler(int test) {
	try {
		if (test) throw test;
		else throw "アタイはゼロ：";
	}
	catch (int i) {
		cout << "捕獲！あなたはスージーの" << i << endl;
	}
	catch (char const *str) {
		cout << "文字列を確保！確保！" << str << endl;
	}
}

int main()
{
	cout << "開始！\n";

	Xhandler(1);
	Xhandler(2);
	Xhandler(0);
	Xhandler(3);

	cout << "狩猟！\n";
	return 0;
}
*/