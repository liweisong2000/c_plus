#include <iostream>
using namespace std;

int main() {
  float harmonic_average(float x, float y);
  float x, y;
  cout << "Please enter the number to caculate" << endl
       << "(use the space to separate numbers, '0' to quit): ";
  while ((cin >> x >> y) && (x * y != 0)) {
    while (cin.get() != '\n')
      ;
    cout << "The harmonic average is: " << harmonic_average(x, y) << endl;
  }
  return 0;
}

float harmonic_average(float x, float y) { return 2 * x * y / (x + y); }
