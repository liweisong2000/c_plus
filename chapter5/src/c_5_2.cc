#include <array>
#include <iostream>
using namespace std;

int main() {
  int i;
  const int ArSize = 101;
  array<long double, ArSize> factorials;
  factorials[1] = factorials[0] = 1;
  for (i = 2; i <= 100; ++i)
    factorials[i] = i * factorials[i - 1];
  for (i = 0; i < ArSize; ++i)
    cout << i << "! = " << factorials[i] << endl;
  return 0;
}
