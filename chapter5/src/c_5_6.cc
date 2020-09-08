#include <iostream>
using namespace std;

int main() {
  const char *month[12] = {"January",   "February", "March",    "April",
                           "May",       "June",     "July",     "August",
                           "September", "October",  "November", "December"};

  int num;
  struct sale {
    int year;
    int sales[13];
    int sum;
  };
  cout << "How many years do you want to catalog: ";
  (cin >> num).get();
  sale *p = new sale[num];

  int m, total = 0;
  for (int i = 0; i < num; ++i) {
    cout << "Year #";
    (cin >> p[i].year).get();
    cout << "Please enter the sales' number of 《C++ For Fools》each month: "
         << endl;
    for (m = 0; m < 12; ++m) {
      cout << month[m] << ": ";
      (cin >> p[i].sales[m]).get();
      p[i].sum += p[i].sales[m];
    }

    cout << "The sales in " << p[i].year << " is: " << p[i].sum << endl;
    total += p[i].sum;
  }
  cout << "The sales in three years is: " << total << endl;
  delete p;
  return 0;
}
