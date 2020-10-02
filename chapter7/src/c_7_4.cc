#include <iostream>
using namespace std;

int main() {
  double probability(double total, double choice);
  double total, choice;
  double result[2];
  while (1) {
    cout << "Please enter the normal number" << endl
         << "(use space between two numbers, '0' to quit): ";
    if ((cin >> total >> choice) && total >= choice) {
      while (cin.get() != '\n')
        ;
      if (total * choice == 0)
        break;
      result[0] = probability(total, choice);
    } else
      break;

    cout << "Please enter the special number: ";
    if ((cin >> total >> choice) && total >= choice) {
      while (cin.get() != '\n')
        ;
      if (total * choice == 0)
        break;
      result[1] = probability(total, choice);
      result[0] *= result[1];
    } else
      break;

    cout << "You have one chance in " << result[0]
         << " to win the first price.\n " << endl;
  }
  return 0;
}

double probability(double total, double choice) {
  double result;
  for (result = 1; choice > 0; --total, --choice)
    result = result * total / choice;
  return result;
}
