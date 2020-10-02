#include <iostream>
using namespace std;

int main() {
  double Factorial(double num, double &sum);
  double num;
  char ope;
  double sum;
  cout << "Please enter the operate('c' to continue, q' to quit): ";
  while ((cin >> ope) && (ope == 'c')) {
    cin.get();
    cout << "Please enter the number: ";
    (cin >> num).get();
    cout << "Result: " << Factorial(num, sum) << endl << "Next operate: ";
  }
  if (ope == 'q')
    cout << "Bye!" << endl;
  return 0;
}

double Factorial(double num, double &sum) {
  if (num == 0)
    sum = 1;
  else if (num > 0)
    sum = num * Factorial((num - 1), sum);
  return sum;
}
