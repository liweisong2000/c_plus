#include <iostream>
using namespace std;

int main() {
  int num;
  int sum = 0;
  cout << "Please enter the number to add('0' to end): ";
  (cin >> num).get();
  while (num) {
    sum += num;
    cout << "The sum is: " << sum << endl;
    cout << "Please enter the number to add('0' to end): ";
    (cin >> num).get();
  }
  return 0;
}
