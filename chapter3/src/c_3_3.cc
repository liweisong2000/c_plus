#include<iostream>
using namespace std;

int main()
{
 float degrees;
 float minutes;
 float seconds;
 const float change = 60;
 cout << "Enter a latitude in degrees , minutes , and seconds: " << endl;
 cout << "First , enter the degrees: ";
 cin >> degrees;
 cout << "Next, enter the minutes of arc: ";
 cin >> minutes;
 cout << "Finally ,enter the seconds of arc: ";
 cin >> seconds;
 float transforms = degrees + (minutes / change) + (seconds / (change*change));
 cout << degrees << " degrees ";
 cout << minutes << " minutes, ";
 cout << seconds <<  " seconds = ";
 cout << transforms << endl;
 return 0;
}
