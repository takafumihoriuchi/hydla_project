#include <iostream>
using namespace std;

class Base {
public:
	virtual void f() {cout << "inside Base" << endl;}
};

class Derived : public Base {
public:
	void f() {cout << "inside Derived" << endl;}
};

int main()
{
	Base *bp, b_ob;
	Derived *dp, d_ob;

	dp = dynamic_cast<Derived *>(&d_ob);
	if (dp) {
		cout << "succeeded on converting from Derived * to Deived *" << endl;
		dp->f();
	} else cout << "failure" << endl;
	cout << endl;

	bp = dynamic_cast<Base *>(&d_ob);
	if (bp) {
		cout << "succeeded on converting from Derived * to Base *" << endl;
		bp->f();
	} else cout << "failure" << endl;
	cout << endl;

	bp = dynamic_cast<Base *>(&b_ob);
	if (bp) {
		cout << "succeeded on converting from Base * to Base *" << endl;
		bp->f();
	} else cout << "failure" << endl;
	cout << endl;

	dp = dynamic_cast<Derived *>(&b_ob);
	if (dp) {
		cout << "failure" << endl;
	} else {
		cout << "failed to convert from Base * to Derived" << endl;
	}
	cout << endl;
	

	bp = &d_ob;
	dp = dynamic_cast<Derived *>(bp);
	if (dp) {
		cout << "succeeded on converting from bp (pointing at Derived * object) to Derived *" << endl;
		dp->f();
	} else cout << "failure" << endl;
	cout << endl;

	bp = &b_ob;
	dp = dynamic_cast<Derived *>(bp);
	if (dp) {
		cout << "failure" << endl;
		dp->f();
	} else {
		cout << "failed on converting from bp (pointing at Base * object) to Derived *" << endl;
	}
	cout << endl;

	dp = &d_ob;
	bp = dynamic_cast<Base *>(dp);
	if (bp) {
		cout << "succeeded on converting from dp (pointing at Derived * object) tp Base *" << endl;
		bp->f();
	} else cout << "failure" << endl;


	return 0;
}