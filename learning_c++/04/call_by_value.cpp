#include <iostream>
using namespace std;

class myclass {
  int who;
public:
  myclass(int n) {
    who = n;
    cout << "コンストラクタ呼び出し" << who << endl;
  }
  ~myclass() {
    cout << "デストラクタ呼び出し" << who << endl;
  }
  int id() {
    return who;
  }
};

void f(myclass o) {
  cout << "受け取り" << o.id() << endl;
}

int main() {
  myclass x(1);
  f(x);
  return 0;
}
