#include<iostream>
using namespace std;

int main()
{
 int sum[3]={0,0,0};
 int sums;
 int sales[3][12];
 int year[3];
 int i,j =0;
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

  for(i=0;i<3;++i)
   { 
    cout << "Please write down the year you want to enter the data(like 2020): ";
    cin >> year[i];
    cout << "Please enter the sales' number of 《C++ For Fools》each month: " << endl;
   
    for(j=0;j<12;++j)
     {
      cout << month[j];
      cin >> sales[i][j];
      sum[i]+= sales[i][j];
     }

    cout << "The sales in " << year[i] << " is: " << sum[i] << endl;
   }

 sums = sum[0]+sum[1]+sum[2];
 cout << "The sales of three years is: " << sums << endl;
return 0;
}
