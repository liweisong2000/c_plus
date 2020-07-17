#include <iostream>
using namespace std;

int main() {
  int num = 0;
  double sum, average;
  double donation[10];
  do
  {
    if(cin >> donation[num])
      cin.get();
    else
      break;
    sum += donation[num];
    ++num;
  }
  while (num < 10);
  average = sum / num;

  int number;
  for (number = 0; num > 0; --num) {
    if (donation[num - 1] > average)
      ++number;
  }
  cout << "The sum of donation is:" << sum << endl;
  cout << "The average number is:" << average << endl;
  cout << "There are " << number << " numbers bigger than average." << endl;
  return 0;
}
