#include<iostream>
using namespace std;

int main()
{
 int sum = 0;
 int sales[12]; 
 const char * month [12] =
  {
   "January is: ",
   "February is: ",
   "March is: ",
   "April is: ",
   "May is: ",
   "June is: ",
   "July is: ",
   "August is: ",
   "September is: ",
   "October is: ",
   "November is: ",
   "December is: "
  };
 cout << "Please enter the sales'number of 《C++ For Fools》each month: " << endl;
  for(int i = 0;i < 12; ++i)
  {
   cout << month [i];
   cin >> sales[i],cin.get();
   sum += sales[i];
  }
 cout << "The sales in this year is: " << sum << endl;
 return 0;
}
