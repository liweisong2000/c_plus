#include<iostream>
using namespace std;

int main()
{
 int degrees;
 int minutes;
 int seconds;
 const  double transform = 37.8553;
 cout << "Enter a latitude in degrees , minutes , and seconds: " << endl;
 cout << "First , enter the degrees: ";
 cin >> degrees;
 cout << "Next, enter the minutes of arc: ";
 cin >> minutes;
 cout << "Finally ,enter the seconds of arc: ";
 cin >> seconds;
 const int degree = degrees;
 const int minute = minutes;
 const int second = seconds;
 cout << degree << " degrees" << minute << " minutes, " << second <<  " seconds = " << transform << " degrees" <<endl; 
 return 0;
}
