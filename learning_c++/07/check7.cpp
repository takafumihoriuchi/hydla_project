#include <iostream>
using namespace std;

enum motor {gas, electric, diesel};
enum steering {power, rack_pinion, manual};


class vehicle {
	int num_wheels;
	int range;
public:
	vehicle(int w, int r) {num_wheels = w; range = r;}
	void show_v() {cout << num_wheels << range << endl;}
};


class motorized : virtual public vehicle {
	enum motor mtr;
public:
	motorized(enum motor m, int w, int r) : vehicle(w, r) {mtr = m;}
	void show_m() {
		switch (mtr) {
			case gas: cout << "normal" << endl; break;
			case electric: cout << "electric" << endl; break;
			case diesel: cout << "diesel" << endl; break;
		}
	}
};


class road_use : virtual public vehicle {
	int passengers;
public:
	road_use(int p, int w, int r) : vehicle(w, r) {passengers = p;}
	void show_r() {cout << passengers << endl;}
};


class car : public motorized, public road_use {
	enum steering strng;
public:
	car(enum steering s, enum motor m, int w, int r, int p) : motorized(m, w, r), road_use(p, w, r), vehicle(w, r) {strng = s;}
	void show() {
		show_m(), show_r(), show_v();
		switch (strng) {
			case power: cout << "power" << endl; break;
			case rack_pinion: cout << "rack_pinion" << endl; break;
			case manual: cout << "manual" << endl; break;
		}
	}
};


int main()
{
	car obj(power, gas, 4, 500, 5);
	obj.show();
	return 0;
}
