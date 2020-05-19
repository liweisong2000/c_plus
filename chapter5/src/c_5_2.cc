#include<iostream>
#include<array>
#include<cmath>
using namespace std;

int main()
{
  int j;
  const int i = 1;
  array <long double,101> factorials;
  for (j = 0;j <= 100; ++j)
  {
    if (j < 1)
      factorials[j] = pow(i,j);
    else
    factorials[j] = j * factorials[j - 1];
  }
  j -= 1;
  cout << j << "! = " << factorials[j] << endl;
  return 0;
}

