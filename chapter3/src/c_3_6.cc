#include<iostream>
using namespace std;
 
int main()
{
 float mile;
 float milesgallon;
 float gallon;
 cout << "Please enter driving mileage (mile) :";
 cin >> mile;
 cout << "Please enter after driving exhausted oil (gallon) :";
 cin >> gallon;
 milesgallon = mile / gallon;
 cout << "Exhaust one gallon can drive: " << milesgallon << "miles"  << endl;
 return 0;
}
