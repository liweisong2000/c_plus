#include<iostream>
using namespace std;

int main()
{
 int num;
 int sum=0;
 cout << "Please enter the number to caculate: ";
 cin >> num;

 for(;num;)
  {
   sum += num;
   num = 0;
   cout << "Up to now the caculate is:  ";
   cout << num << endl;
   cout << "Do you want you caculate next number?" << endl;
   cout << "If yes, enter next number, otherwise enter zero: ";
   cin >> num;
  }

 return 0;
}


