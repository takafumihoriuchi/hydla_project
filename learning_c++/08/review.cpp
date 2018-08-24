#include <iostream>
using namespace std;

class airship {
protected:
	int capacity;
	double load;
public:
	airship(int c, double l) {capacity = c; load = l;}
};

enum engine_type {propeller, jet};
class airplane : public airship {
	enum engine_type engine;
	double travel_dist;
public:
	airplane(int c, double l, enum engine_type e, double td) : airship(c, l) {engine = e; travel_dist = td;}
	void show() {
		cout << capacity << endl;
		cout << load << endl;
		cout << (engine ? "jet" : "propeller") << endl; // 要素がふたつのenumだから使える小技
		cout << travel_dist << endl;
	}
};

enum gas_type {hydrogen, hellium};
class airballoon : public airship {
	enum gas_type gas;
	double max_altitude;
public:
	airballoon(int c, double l, enum gas_type g, double al) : airship(c, l) {gas = g; max_altitude = al;}
	void show() {
		cout << capacity << endl;
		cout << load << endl;
		cout << (gas ? "hellium" : "hydrogen") << endl;
		cout << max_altitude << endl;
	}
};


int main()
{
	cout << endl;
	cout << "airplane: Boeing-787\n";
	airplane boeing787(300, 905.2, jet, 9802.33);
	boeing787.show();
	cout << endl;

	cout << "airballoon: Cameron\n";
	airballoon cameron(3, 50.5, hellium, 510.0);
	cameron.show();
	cout << endl;

	return 0;
}
