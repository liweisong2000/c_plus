#include <iostream>
using namespace std;

int main() {
  int num;
  int sum = 0;
  do {
    cout << "Please enter the number to add('0' to end): ";
    (cin >> num).get();
    if (!num)
      break;
    sum += num;
    cout << "The sum is: " << sum << endl;
  } while (1);
  return 0;
}
