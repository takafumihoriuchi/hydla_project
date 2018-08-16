#include <iostream>
#include <cstdio>
using namespace std;

class date {
	int day, month, year;
public:
	date(char *str);
	date(int m, int d, int y);
	void show();
};

date::date(char *str) {
	sscanf(str, "%d%*c%d%*c%d", &month, &day, &year);
}

date::date(int m, int d, int y) {
	day = d;
	month = m;
	year = y;
}

void date::show() {
	cout << month << '/' << day << '/' << year << endl;
}

int main()
{
	date sdate((char *)("8/011/2018"));
	date idate(8,11,2018);
	sdate.show();
	idate.show();
	return 0;
}