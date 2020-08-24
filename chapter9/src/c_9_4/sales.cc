#include "sales.h"
#include <iostream>
namespace SALES {

static int time;
void setSales(Sales &s, const double ar[], int n) {
  int i;
  for (i = 0; i < n; ++i) {
    if (s.sales[i])
      s.sales[i] = 0;
    s.sales[i] = ar[i];
  }

  s.min = s.sales[0], s.max = 0, s.average = 0;
  for (i = 0; i < n; ++i) {
    s.min = s.sales[i] < s.min ? s.sales[i] : s.min;
    s.max = s.sales[i] > s.max ? s.sales[i] : s.max;
    s.average += s.sales[i];
  }
  s.average /= i;
  time = i;
}

void setSales(Sales &s) {
  using std::cin;
  using std::cout;
  using std::endl;
  int i;
  cout << "PLease enter the sales: " << endl;
  for (i = 0; i < 4; ++i) {
    cout << "#" << i + 1 << endl << "Sales: ";
    cin >> s.sales[i];
    while (cin.get() != '\n')
      ;
  }

  s.min = s.sales[0], s.max = 0, s.average = 0;
  for (i = 0; i < 4; ++i) {
    s.min = s.sales[i] < s.min ? s.sales[i] : s.min;
    s.max = s.sales[i] > s.max ? s.sales[i] : s.max;
    s.average += s.sales[i];
  }
  s.average /= i;
  time = i;
}

void showSales(const Sales &s) {
  using std::cin;
  using std::cout;
  using std::endl;
  cout << "Here is the result: " << endl;
  for (int i = 0; i < time; ++i)
    cout << "#" << i + 1 << endl << "Sales: " << s.sales[i] << endl;
  cout << "Everage: " << s.average << endl
       << "Max: " << s.max << endl
       << "Min: " << s.min << endl;
}
}
