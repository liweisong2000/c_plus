#include <iostream>
#include <string>
using namespace std;

int main() {
  int num;
  struct car {
    char producer[30];
    int produceyear;
  };
  cout << "How many cars do you wish to catalog? ";
  (cin >> num).get();
  car *p = new car[num];

  int i;
  for (i = 0; i < num; ++i) {
    cout << "Car #" << i + 1 << ":" << endl << "Please enter the make: ";
    cin.getline(p[i].producer, 30);
    cout << "Please enter the year made: ";
    (cin >> p[i].produceyear).get();
  }

  cout << "Here is your collection: " << endl;
  for (i = 0; i < num; ++i)
    cout << p[i].produceyear << " " << p[i].producer << endl;
  delete[] p;
  return 0;
}
