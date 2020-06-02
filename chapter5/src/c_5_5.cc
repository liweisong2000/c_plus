#include<iostream>
using namespace std;

int main()
{
 int i,j;
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
  for(i=0;i<12;++i)
  {
   cout << month [i];
   cin >> sales[i];
  }
  cout << endl;
  cout << "The sitation of this year: " << endl;
  for(j=0;j<12;++j)
  {
  cout << month [j] << sales[j] << endl;
  }
  return 0;
}
