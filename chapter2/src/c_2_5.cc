#include<iostream>
int Fahrenheit(int);
int main()
{
  using namespace std;
cout <<"Please enter a Celsius value:";
int cel;
cin>>cel;
int fac=Fahrenheit(cel);
cout <<cel<<"degrees Celsius is"<<fac<<"degrees Fahrenheit"<<endl;
return 0;
}

int Fahrenheit(int ces)
{
  return 1.8*ces+32;
}
