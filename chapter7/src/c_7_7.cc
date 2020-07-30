#include <iostream>
using namespace std;

int main() {
  double *fill_array(double *begin, double *end);
  void show_array(double *begin, double *end);
  void revalue(double factor, double *begin, double *end);

  const int Max = 5;
  double properties[Max];
  double factor;
  double *p;
  p = fill_array(properties, properties + Max);

  show_array(properties, p);

  if (p != properties) {
    cout << "Enter revaluation factor: ";
    while (!(cin >> factor)) {
      cin.clear();
      while (cin.get() != '\n')
        continue;
      cout << "Bad input; Please enter a number: ";
    }
    cin.get();
    revalue(factor, properties, p);
    show_array(properties, p);
  }
  cout << "Done.\n";
  return 0;
}

double *fill_array(double *begin, double *end) {
  for (int i = 0; begin != end; ++i, ++begin) {
    cout << "Enter value #" << (i + 1) << ": ";
    (cin >> *begin).get();
    if (!cin) {
      cin.clear();
      while (cin.get() != '\n')
        ;
      cout << "Bad input; Input process terminated.\n";
      break;
    } else if (*begin < 0)
      break;
  }
  if (begin == end)
    cout << "The array already full." << endl;
  return begin;
}

void show_array(double *begin, double *end) {
  for (int i = 0; begin != end; ++i, ++begin) {
    cout << "Property #" << (i + 1) << ": $" << *begin << endl;
  }
}

void revalue(double factor, double *begin, double *end) {
  while (begin != end) {
    *begin *= factor;
    ++begin;
  }
}
