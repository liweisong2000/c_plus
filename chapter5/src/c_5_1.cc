#include <iostream>
using namespace std;

int main() {
  int i, j;
  int sum = 0;
  cout << "Please enter the first integer: ";
  (cin >> i).get();
  cout << "Please enter the second integer: ";
  (cin >> j).get();
  do {
    sum += i;
    ++i;
  } while (i <= j);
  cout << "The sum of integer1 plus to integer2 is: " << sum << endl;
  return 0;
}
