#include<iostream>
#include<array>
using namespace std;

int main()
{
 int i;
 array<long double,100> factorials;
 factorials[1] = factorials[0] = 1;
 cout << "Please enter the number you want to caculate: " << endl;

 for(i=2;i<=100;++i)
  {
   factorials[i] = i * factorials[i-1];
  }
  i=i-1;
 cout <<i  << "! = " << factorials[i] << endl;
 return 0;
}

