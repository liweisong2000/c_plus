#include<iostream>
using namespace std;
 
int main ()
{
 long seconds;
 int second;
 int minute;
 int hour;
 int day;
 const int days = 24;
 const int hours = 60;
 const int minutes = 60;
 cout << "Enter the number of seconds:";
 cin >> seconds;
 second = seconds % minutes;
 minute = seconds / minutes % hours;
 hour = seconds / minutes / hours % days;
 day = seconds / (minutes * hours * days);
 cout << seconds << " seconds = ";
 cout << day << " days,";
 cout << hour << " hours,";
 cout << minute << " minutes,"; 
 cout << second << " seconds." << endl;
 return 0;
}
