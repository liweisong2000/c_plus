#include<iostream>
#include<array>
#include<cmath>
using namespace std;

int main()
{
 const int i = 1;
 int j;
 array<long double,101> factorials;
  for(j = 0;j < 1;)
  {
   factorials[j] = pow(i,j);
   for(j = 1;j <= 100; ++j)
    factorials[j] = j * factorials[j - 1];
  }
 j = j - 1;
 cout << j << "! = " << factorials[j] << endl;
 return 0;
}

