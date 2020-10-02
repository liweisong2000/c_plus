#include <iostream>
using namespace std;

int main() {
  double add(double x, double y);
  double div(double x, double y);
  double calculate(double n1, double n2, double(re)(double, double));
  double n1, n2, r;
  cout << "PLease enter two numbers" << endl
       << "(use space between two numbers,'0' to quit): ";

  while ((cin >> n1 >> n2) && (n1 * n2 != 0)) {
    while (cin.get() != '\n')
      ;
    r = calculate(n1, n2, add);
    cout << n1 << " plus " << n2 << " is: " << r << endl;
    r = calculate(n1, n2, div);
    cout << n1 << " divided by " << n2 << " is: " << r << endl;
    cout << "Next two numbers: ";
  }
  cout << "Bye!" << endl;
  return 0;
}

double add(double x, double y) { return x + y; }

double div(double x, double y) { return x / y; }

double calculate(double n1, double n2, double(re)(double, double)) {
  return (re)(n1, n2);
}
