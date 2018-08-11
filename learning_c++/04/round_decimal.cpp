#include <iostream>
#include <cmath>
using namespace std;

void my_round(double &num);

int main()
{
  double a = 100.4;
  cout << a << " => ";
  my_round(a);
  cout << a << endl;
  return 0;
}

void my_round(double &num)
{
  double frac, val;
  frac = modf(num, &val);
  if (frac < 0.5) num = val;
  else num = val + 1.0;
}
