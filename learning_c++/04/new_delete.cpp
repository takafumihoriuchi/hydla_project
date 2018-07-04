#include <iostream>
using namespace std;

int main()
{
  int *p;

  p = new int;
  if (!p) {
    cout << "failed to allocate memory\n";
    return 1;
  }

  *p = 1000;
  cout << "p is pointing at integer: " << *p << endl;
  cout << "address of p: " << p << endl;
  cout << "andpassand??: " << &p << endl;
  delete p;
  return 0;
}
