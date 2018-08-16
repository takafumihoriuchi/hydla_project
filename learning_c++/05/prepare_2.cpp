#include <iostream>
using namespace std;

class samp {
  int x;
public:
  samp(int n) {x = n;}
  int getx() {return x;}
};

// このクラスを使用して、10個の要素を持つ配列を初期化
// xに1から10までの値を格納する

int main()
{
  int *p = new int [10];
  if (!p) {
    cout << "failed to allocate memory" << endl;
    exit(1);
  }

  int i;
  for (i=0; i<10; i++) {
    samp obj(i+1);
    p[i] = obj.getx();
    printf("p[%d]: %d\n", i, p[i]);
  }

  delete [] p;

  return 0;
}
