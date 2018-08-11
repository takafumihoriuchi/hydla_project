#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class strtype {
  char *p;
public:
  strtype(char *s);
  ~strtype() {delete [] p;}
  char *get() {return p;}
};

strtype::strtype(char *s) {
  int l = strlen(s) + 1;
  p = new char [l];

  if (!p) {
    cout << "failed to allocate memory" << endl;
    exit(1);
  }

  strcpy(p, s);
}

void show(strtype &x) {
  char *s = x.get();
  cout << s << endl;
}

int main()
{
  strtype a("Hello"), b("World!");
  show(a);
  show(b);
  return 0;
}
