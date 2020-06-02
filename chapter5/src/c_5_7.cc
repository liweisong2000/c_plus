#include<iostream>
#include<string>
using namespace std;
 
struct car
{
 char producer[20];
 char produceyear[5];
}a[3];

int main()
{
 int i;
 int k=0; 
 int j;

 car *p = new car;
 p = a;
 cout << "How many cars do you wish to catalog: ";
 cin >> j;

 for(i=0;i<j;++i)
 { 
  cout << "Car #" << ++k << endl;
  cout << "Please enter the make:";
  cin.get();
  cin.getline(p[i].producer,20);
  cout << "Please enter the year made:";
  cin >> p[i].produceyear;
 }

 cout << "Here is your collection: " << endl;
 for(i=0;i<j;++i)
 {
  cout << p[i].produceyear << " " <<  p[i].producer << endl; 
 }
 delete []p;
 return 0;
}
