#include <iostream>

using namespace std;

int main()
{
  double a, b, result;
  char op;

  cout << "---|---|---|---\n";
  cout << " a |   | b = ? \n";
  cout << "---|---|---|---\n";

  cout << "enter first number a = ";
  cin >> a;

  cout << "---|---|---|---\n";
  cout << " " << a << " |   | b = ? \n";
  cout << "---|---|---|---\n";

  cout << "enter your oparetion (+ or - or x or /): ";
  cin >> op;

  cout << "---|---|---|---\n";
  cout << " " << a << " | " << op << " | b = ? \n";
  cout << "---|---|---|---\n";

  cout << "enter second number b = ";
  cin >> b;

  switch (op)
  {
  case '+':
    result = a + b;
    cout << "---|---|---|---\n";
    cout << " " << a << " | " << op << " | " << b << " = " << result << " \n";
    cout << "---|---|---|---\n";
    break;
  case '-':
    result = a - b;
    cout << "---|---|---|---\n";
    cout << " " << a << " | " << op << " | " << b << " = " << result << " \n";
    cout << "---|---|---|---\n";
    break;
  case '*':
    result = a * b;
    cout << "---|---|---|---\n";
    cout << " " << a << " | " << op << " | " << b << " = " << result << " \n";
    cout << "---|---|---|---\n";
    break;
  case 'x':
    result = a * b;
    cout << "---|---|---|---\n";
    cout << " " << a << " | " << op << " | " << b << " = " << result << " \n";
    cout << "---|---|---|---\n";
    break;
  case 'X':
    result = a * b;
    cout << "---|---|---|---\n";
    cout << " " << a << " | " << op << " | " << b << " = " << result << " \n";
    cout << "---|---|---|---\n";
    break;
  case '/':
    result = a / b;
    cout << "---|---|---|---\n";
    cout << " " << a << " | " << op << " | " << b << " = " << result << " \n";
    cout << "---|---|---|---\n";
    break;

  default:
    cout << "Oops!! Invalid Input";
    break;
  }

  return 0;
}
