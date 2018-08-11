#include <iostream>
#include <cstdlib>
using namespace std;

class array {
  int size;
  char *p;
public:
  array(int num);
  ~array() {delete [] p;}
  char &put(int i);
  char get(int i);
};

array::array(int num) {
  p = new char [num];
  if (!p) {
    cout << "failed to allocate memory" << endl;
    exit(1);}
  size = num;
}

char &array::put(int i) {
  if (i<0 || i>size-1) {
    cout << "boundary error\n";
    exit(1);
  }
  return p[i];
}

char array::get(int i) {
  if (i<0 || i>size-1) {
    cout << "boundary error\n";
    exit(1);
  }
  return p[i];
}

int main()
{
  array a(10);
  a.put(3) = 'X';
  a.put(2) = 'R';
  cout << a.get(3) << a.get(2) << endl;
  a.put(11);
  return 0;
}
