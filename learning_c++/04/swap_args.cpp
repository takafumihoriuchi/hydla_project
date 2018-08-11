#include <iostream>
using namespace std;

void swap_args(int &a, int &b);

int main()
{
  int a=4, b=7;
  cout << "(a, b) = (" << a << ", " << b << ")\n";
  cout << "swapping\n";
  swap_args(a, b);
  cout << "(a, b) = (" << a << ", " << b << ")\n";
  return 0;
}

void swap_args(int &a, int &b)
{
  int tmp = b;
  b = a;
  a = tmp;
}
