#include<iostream>
using namespace std;
 
int main ()
{
 long long seconds;
 const int days = 24;
 const int hours = 60;
 const int minutes = 60;
 cout << "Enter the number of seconds:";
 cin >> seconds;
 int day = seconds/(days*hours*minutes);
 int hour = seconds/(hours*minutes) - day * days;
 int minute = seconds/minutes - hours * day * days  - hours * hour;     
 long long  second = seconds -   minutes * hours * day * days - minutes * hour * hours - minute * minutes;  
 cout << seconds << " seconds = " << day << " days," << hour << " hours," << minute << " minutes," << second << " seconds," << endl;
 return 0;
}
