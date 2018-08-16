#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  double *f = new double(3.2);
  if (!f) {
    cout << "failed to allocate memory" << endl;
    exit(1);
  }

  int *d = new int(7);
  if (!d) {
    cout << "failed to allocate memory" << endl;
    exit(1);
  }

  // *f = 3.2;
  // *d = 7;

  cout << "f: " << *f << endl;
  cout << "d: " << *d << endl;

  delete f;
  delete d;

  return 0;
}
