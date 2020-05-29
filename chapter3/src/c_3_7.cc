#include<iostream>
using namespace std;

int main()
{
 double litre;
 double mile;
 const double miles = 62.14;
 const double litres= 3.875;
 cout << "Please enter car exhausted oil (each 100 kilometer exhausted oil litres) : "; 
 cin >> litre;
 mile = (miles * litres) / litre;
 cout << "Transform into US measure method (miles each gallon): " << mile << endl; 
 return 0;
}
