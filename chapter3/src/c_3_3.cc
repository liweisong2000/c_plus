#include<iostream>
using namespace std;

int main()
{
 float degrees;
 float minutes;
 float seconds;
 float change=60;
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
 float transforms = degrees+(minutes/change)+(seconds/(change*change ));
 const double transform = transforms;
 cout << degree << " degrees ";
 cout << minute << " minutes, ";
 cout << second <<  " seconds = ";
 cout << transform << endl;
 return 0;
}
