#include<iostream>
using namespace std;

int main()
{
  int i,j;
  int sum = 0;
  int num[2];
  cout << "Please enter the first integer: ";
  cin >> num[0],cin.get();
  cout << "Please enter the second integer: ";
  cin >> num[1];
  i = num[0] < num[1] ? num[0] : num[1];
  j = num[0] > num[1] ? num[0] : num[1];
  for(;i <= j; ++i)
  {
   sum += i;
  }
  cout << "The sum of integer1 plus to integer2 is: " << sum << endl;
  return 0;
}

