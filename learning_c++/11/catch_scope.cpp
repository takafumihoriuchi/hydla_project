#include <iostream>
#include <cstring>
using namespace std;

/* throwは、直下のcatchで処理された後、それ以降の文を実行する */

void Xhandler(char *animal) {
	try {
		if (strlen(animal) > 4) throw animal;
	}
	catch (char *game) {
		cout << "捕獲！獲物は：" << game << endl;
	}
	cout << "roarrrr!" << endl;
}

int main()
{
	cout << "開始！" << endl;

	Xhandler((char *)"rabbit");
	Xhandler((char *)"tiger");
	Xhandler((char *)"rat");
	Xhandler((char *)"巨人");

	cout << "狩猟！" << endl;
	return 0;
}