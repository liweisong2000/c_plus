#include<iostream>
using namespace std;

int main()
{
 signed int num;
 signed int sum = 0;
 cout << "Please enter the number to caculate: ";
 cin >> num,cin.clear(),cin.sync();

  for(;num;)
   {
    sum += num;
    cout << "Up to now the caculate is:  ";
    cout << sum << endl << endl;
    cout << "Do you want you caculate next number?" << endl;
    cout << "If yes, enter next number, otherwise enter zero: ";
    cin >> num;
   }

 return 0;
}


