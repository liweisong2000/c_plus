#include<iostream>
using namespace std;

int main()
{
  double heightinch;
  const int foot = 12;
  cout << "Please enter your height(unit:inch):___\b\b\b";
  cin >> heightinch;
  double heightfoot = heightinch / foot;
  cout << "Your height is(unit:inch): " << heightinch <<  endl;
  cout << "Your height is(unit:foot): " << heightfoot <<  endl;
  return 0; 
}
