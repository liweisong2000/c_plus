#include<iostream>
using namespace std;

int main()
{
  signed int num;
  signed int sum = 0;
  do
  {
    cout << "Please enter the number to add, " << endl;
    cout << "otherwise enter zero to end the operation: ";
    (cin >> num).get();
    sum += num;
    cout << "Up to now the sum is: ";
    cout << sum << endl << endl;
  }
  while (num);
  return 0;
}


