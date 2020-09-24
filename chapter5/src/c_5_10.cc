#include <iostream>
using namespace std;

int main() {
  int row;
  cout << "Enter number of rows: ";
  (cin >> row).get();
  for (int i = 1; i <= row; ++i) {
    for (int j = 1; j <= (row - i); ++j)
      cout << '.';
    for (int k = 1; k <= i; ++k)
      cout << '*';
    cout << endl;
  }
  return 0;
}
