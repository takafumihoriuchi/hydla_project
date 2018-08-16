#include <iostream>
using namespace std;

void mag(long &num, long order);
// order で指定された桁数まで num の桁数を上げる関数

int main()
{
  long num = 4;
  long order = 2;
  mag(num, order);
  cout << num << endl;
  return 0;
}

void mag(long &num, long order) {
  for (int i=0; i<order; i++) num *= 10;
}
