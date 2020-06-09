#include<iostream>
using namespace std;

struct sale
{
 int sales[12];
 int year;
 int sum;
};

int main()
{
 int i,j = 0;
 int sums = 0;
 int num;
 sale * p = new sale[num];
 
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
 
 cout << "How many years do you want to catalog: ";
 cin >> num;
  for(i = 0;i < num; ++i)
  { 
   cout << "Year #";
   cin >> p[i].year,cin.clear(),cin.sync();
   cout << ": ";
   cout << "Please enter the sales' number of 《C++ For Fools》each month: " << endl;
   
   for(j = 0;j < 12; ++j)
   {
    cout << month[j];
    cin >> p[i].sales[j],cin.clear(),cin.sync();
    p[i].sum += p[i].sales[j];
   }

   cout << "The sales in " << p[i].year << " is: " << p[i].sum << endl;
  }

  for(i = 0;i < 3; ++i)
  {
   sums += p[i].sum;
  }
 cout << "The sales of three years is: " << sums << endl;
return 0;
}
