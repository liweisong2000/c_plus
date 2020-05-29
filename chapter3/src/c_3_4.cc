#include<iostream>
using namespace std;
 
int main ()
{
 long seconds;
 const int days = 24;
 const int hours = 60;
 const int minutes = 60;
 cout << "Enter the number of seconds:";
 cin >> seconds;
 int second = seconds % minutes;
 int minute = seconds / minutes % hours;
 int hour = seconds / minutes / hours % days;
 int day = seconds / (minutes * hours * days);
 cout << seconds << " seconds = ";
 cout << day << " days,";
 cout << hour << " hours,";
 cout << minute << " minutes,"; 
 cout << second << " seconds," << endl;
 return 0;
}
