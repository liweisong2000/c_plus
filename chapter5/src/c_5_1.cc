#include<iostream>
using namespace std;

int main()
{
 int sum1 = 0;
 int num1,num2;
 cout << "Please enter the first integer: ";
 cin >> num1;
 cout << "Please enter the second integer: ";
 cin >> num2;

 for(;num1<=num2;++num1)
 {
   sum1 += num1;
 }
 cout << "The sum of integer1 plus to integer2 is: " << sum1 << endl;
 return 0;
}
