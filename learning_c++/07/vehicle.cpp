#include <iostream>
using namespace std;

class kyojin {
	int height;
	int weight;
public:
	kyojin(int h, int w) { height = h; weight = w;}
	void show_kyojin() {
		cout << "高さ: " << height << " cm" << endl;
		cout << "重さ: " << weight << " kg" << endl;
	}
};

class muku : public kyojin {
	int power;
public:
	muku(int h, int w, int p) : kyojin(h, w) {
		power = p;
	}
	void show() {
		show_kyojin();
		cout << "腕力: " << power << " N" << endl;
	}
};

class chisei : public kyojin {
	int intelligence;
public:
	chisei(int h, int w, int i) : kyojin(h, w) {
		intelligence = i;
	}
	void show() {
		show_kyojin();
		cout << "知性レベル: " << intelligence << "pts" << endl;
	}
};

int main()
{
	// muku: (height, weight, power)
	muku bean(1320, 82, 89);
	// chisei: (height, weight, intelligence)
	chisei shingeki(1602, 68, 91);

	cout << "無垢の巨人 (bean):" << endl;
	bean.show();

	cout << "知性型の巨人 (shingeki):" << endl;
	bean.show();

	return 0;
}