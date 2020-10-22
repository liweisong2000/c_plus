#include <iostream>
using namespace std;

template <typename T> T max5(T str[]) {
  T max;
  max = str[0];
  for (int i = 0; i < 5; ++i)
    max = str[i] > max ? str[i] : max;
  return max;
}

int main() {
  int int_arr[5] = {1, 5, 2, 3, 4};
  cout << "The biggest number in this array is: " << max5(int_arr) << endl;

  double dou_arr[5] = {1.1, 5.5, 2.2, 3.3, 4.4};
  cout << "The biggest number in this array is: " << max5(dou_arr) << endl;
  return 0;
}

