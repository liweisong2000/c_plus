#include <iostream>
using namespace std;

const int Seasons = 4;
const char *Snames[Seasons][10] = {"Spring", "Summer", "Fall", "Winter"};

int main() {
  void fill(double *pa);
  void show(double *da);
  double expenses[Seasons];
  fill(expenses);
  show(expenses);
  return 0;
}

void fill(double *pa) {
  for (int i = 0; i < Seasons; ++i, ++pa) {
    cout << "Enter " << (*Snames)[i] << " expenses: ";
    (cin >> *pa).get();
  }
}

void show(double *da) {
  double total = 0.0;
  cout << "EXPENSES\n";
  for (int i = 0; i < Seasons; ++i, ++da) {
    cout << (*Snames)[i] << ": $" << *da << endl;
    total += *da;
  }
  cout << "Total Expenses: $" << total << endl;
}
