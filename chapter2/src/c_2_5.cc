#include<iostream>
using namespace std;

double Fahrenheit(int ces);
int main()
{
  cout <<"Please enter a Celsius value:";
  int cel;
  cin>>cel;
  double fac=Fahrenheit(cel);
  cout <<cel<<"degrees Celsius is"<<fac<<"degrees Fahrenheit"<<endl;
  return 0;
}

double Fahrenheit(int ces)
{
  return 1.8*ces+32;
}
