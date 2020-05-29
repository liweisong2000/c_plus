#include<iostream>
using namespace std;

int main()
{
  int heightinch;
  double inch;
  double heightfoot;
  const double foot = 12;
  cout << "Please enter your height(unit: inch):___\b\b\b";
  cin >> inch;
  heightinch = inch;
  heightfoot = double((inch - heightinch) * foot);
  cout << "Your height is(unit:inch): " << heightinch <<  endl;
  cout << "Your height is(unit:foot): " << heightfoot <<  endl;
  return 0; 
}
