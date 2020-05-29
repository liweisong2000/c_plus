#include<iostream>
using namespace std;
 
int main()
{
 double mile;
 double milesgallon;
 double gallon;
 cout << "Please enter driving mileage (mile) :";
 cin >> mile;
 cout << "Please enter after driving exhausted oil (gallon) :";
 cin >> gallon;
 milesgallon = mile / gallon;
 cout << "exhauster one gallon can drive " << milesgallon << "miles"  << endl;
 return 0;
}
