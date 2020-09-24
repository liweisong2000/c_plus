#include <iostream>
#include <string>
using namespace std;

int main() {
  struct data {
    string name;
    double fund;
  };
  int num;
  cout << "Please enter the number of patrons: ";
  (cin >> num).get();
  data *mes = new data[num];

  int i;
  for (i = 0; i < num; ++i) {
    cout << "#" << i + 1 << endl << "Name: ";
    getline(cin, mes[i].name);
    cout << "Fund:";
    (cin >> mes[i].fund).get();
  }

  int p;
  const double stand = 10000.0;
  cout << "Grand Patrons:" << endl;
  for (i = 0, p = 0; i < num; ++i)
    if (mes[i].fund > stand) {
      cout << "Name:" << mes[i].name << "   Fund:" << mes[i].fund << endl;
      ++p;
    }
  if (!p)
    cout << "none" << endl;

  cout << "Patrons:" << endl;
  for (i = 0, p = 0; i < num; ++i)
    if ((mes[i].fund <= stand) && (mes[i].fund > 0)) {
      cout << "Name:" << mes[i].name << "   Fund:" << mes[i].fund << endl;
      ++p;
    }
  if (!p)
    cout << "none" << endl;

  delete[] mes;
  return 0;
}
