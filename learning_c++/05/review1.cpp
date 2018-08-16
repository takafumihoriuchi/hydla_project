#include <iostream>
#include <cstdio>
#include <ctime>
using namespace std;

class date {
	int day, month, year;
public:
	date(char *str);
	date(int m, int d, int y);
	date(time_t t);
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

date::date(time_t t) {
	struct tm *p;
	p = localtime(&t);
	day = p->tm_mday;
	month = p->tm_mon;
	year = p->tm_year;
}

void date::show() {
	cout << month << '/' << day << '/' << year << endl;
}

int main()
{
	date sdate((char *)("8/011/2018"));
	date idate(8,11,2018);
	date tdate(time(NULL));
	cout << time(NULL) << endl;

	sdate.show();
	idate.show();
	tdate.show();

	return 0;
}