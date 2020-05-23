#include<iostream>
using namespace std;
 
int main()
{
 double mile;
 double gallon ;
 cout << "Please enter driving mileage (mile) :" ;
 cin >> mile ;
 cout << "Please enter after driving exhausted oil (gallon) :" ;
 cin >> gallon ;
 double miles = mile/gallon ;
 cout << "exhauster one gallon can drive " << miles << "miles"  << endl ;
 return 0 ;
}
