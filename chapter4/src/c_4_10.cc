#include <array>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int i;
  float sum = 0;
  array<float, 3> grade;
  cout << "Please enter your running grades: " << endl << "The first time: ";
  (cin >> grade[0]).get();
  cout << "The second time: ";
  (cin >> grade[1]).get();
  cout << "The third time: ";
  (cin >> grade[2]).get();
  for (i = 0; i < 3; ++i) {
    sum += grade[i];
  }
  cout << "You have run " << i << " times." << endl
       << "Your averge grade is: " << sum / i << " seconds." << endl;
  return 0;
}
