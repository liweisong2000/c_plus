#include<iostream>
using namespace std;

void get_time(int hours,int minutes);

int main()
{
  int hours;
  int minutes;
  cout<<"Enter the number of hours:";
  cin>>hours;
  cout<<"Enter the number of minutes:";
  cin>>minutes;
  get_time(hours,minutes);
  return 0;
}

void get_time(int hours,int minutes)
{
  cout <<"Time:"<<hours<<":"<<minutes<<endl;
}
