#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double a, b, c;

  cout << "enter the height of the triangle: ";
  cin >> a;
  cout << "enter the base of the triangle: ";
  cin >> b;
  c = sqrt(pow(a, 2) + pow(b, 2));
  cout << "the Hypotenus is : " << c;

  return 0;
}
