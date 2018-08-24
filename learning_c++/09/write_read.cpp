#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream out("test2", ios::out | ios::binary);
	if (!out) {
		cout << "failed" << endl;
		return 1;
	}

	double nums[4] = {1.1,2.2,3.3,4.4};
	out.write((char *) &nums, sizeof(nums));
	out.close();

	ifstream in("test2", ios::in | ios::binary);
	if (!in) {
		cout << "failed" << endl;
		return 1;
	}

	double nums2[4];
	in.read((char *) nums2, sizeof(nums2));

	int i;
	for (i=0; i<4; i++) {
		cout << nums2[i] << ' ';
	}
	cout << endl;

	cout << in.gcount() << "文字を読み込みました。\n";
	in.close();

	return 0;
}