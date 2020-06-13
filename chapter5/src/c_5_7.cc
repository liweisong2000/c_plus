#include<iostream>
#include<string>
using namespace std;
 
struct car
{
 char producer[30];
 char produceyear[5];
};

int main()
{
 int i,num;
 int k = 0; 
 car * p = new car[num];
 cout << "How many cars do you wish to catalog? ";
 cin >> num,cin.get();
  for(i = 0;i < num; ++i)
  { 
   cout << "Car #" << ++k << ":" << endl;
   cout << "Please enter the make: ";
   cin.getline(p[i].producer,20);
   cout << "Please enter the year made: ";
   cin >> p[i].produceyear,cin.get();
  }
 cout << "Here is your collection: " << endl;
  for(i = 0;i < num; ++i)
   cout << p[i].produceyear << " " <<  p[i].producer << endl;
 delete []p;
 return 0;
}
