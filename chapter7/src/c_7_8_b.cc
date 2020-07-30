#include <iostream>
using namespace std;

const int Seasons = 4;
const char *Snames[Seasons][10] = {"Spring", "Summer", "Fall", "Winter"};

struct data {
  double expenses[Seasons];
};

int main() {
  void fill(struct data * da);
  void show(struct data da);
  struct data da;
  fill(&da);
  show(da);
  return 0;
}

void fill(struct data *da) {
  for (int i = 0; i < Seasons; ++i) {
    cout << "Enter " << (*Snames)[i] << " expenses: ";
    (cin >> da->expenses[i]).get();
  }
}

void show(struct data da) {
  double total = 0.0;
  cout << "EXPENSES\n";
  for (int i = 0; i < Seasons; ++i) {
    cout << (*Snames)[i] << ": $" << da.expenses[i] << endl;
    total += da.expenses[i];
  }
  cout << "Total Expenses: $" << total << endl;
}
