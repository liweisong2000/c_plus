#include<iostream>
using namespace std;

int main()
{
  const int foot = 12;
  double heightinch;
  double heightfoot = heightinch/foot;
  cout << "Please enter your height(unit:inch):___\b\b\b";
  cin >> heightinch;
  cout << "Your height is(unit:inch): " << heightinch <<  endl;
  cout << "Your height is(unit:foot): " << heightfoot <<  endl;
  return 0; 
}
