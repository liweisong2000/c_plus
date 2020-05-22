#include<iostream>
using namespace std ;

int main()
{
  const int foot = 12 ;
  cout << "Please enter your height(unit:inch):___\b\b\b" ;
  double heightinch ;
  cin >> heightinch ;
  double heightfoot =(double)heightinch/foot ;
  cout << "Your height is :" << heightinch << "inch" << endl ;
  cout << "Your height is :" << heightfoot << "foot "<<endl ;
  return 0 ; 
}
