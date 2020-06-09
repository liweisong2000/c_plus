#include<iostream>
using namespace std;

int main()
{
  int heightinch;
  int inch;
  int heightfoot;
  const int foot = 12;
  cout << "Please enter your height(unit: inch):___\b\b\b";
  cin >> inch;
  heightfoot = inch / foot;
  heightinch = inch % foot;
  cout << "Your height is: " << heightfoot <<  " foot and ";
  cout << heightinch << " inch" << endl;
  return 0; 
}
