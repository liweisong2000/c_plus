#include<iostream>
using namespace std;

int main()
{
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

  int num;
  struct sale
  {
    int sales[13];
    int year;
    int sum;
  };
  sale * p  = new sale[num];
  cout << "How many years do you want to catalog: ";
  (cin >> num).get();

  int mon = 0,total = 0;
  while (num > 0)
  { 
    cout << "Year #";
    (cin >> p[num].year).get();
    cout << "Please enter the sales' number of 《C++ For Fools》each month: " << endl;
    for (mon = 0;mon < 12; ++mon)
    {
      cout << month[mon];
      (cin >> p[num].sales[mon]).get();
      p[num].sum += p[num].sales[mon];
    }

    cout << "The sales in " ;
    cout << p[num].year << " is: " << p[num].sum << endl;
    total += p[num].sum;
    --num;
  }
  cout << "The sales in these years is: " << total << endl;
  return 0;
}
