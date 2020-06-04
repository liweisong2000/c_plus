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
 int i;
 int k = 0; 
 int num;
 car *p = new car[num];
 cout << "How many cars do you wish to catalog? ";
 cin >> num,cin.clear(),cin.sync();

  for(i = 0;i < num; ++i)
   { 
    cout << "Car #" << ++k << ":" << endl;
    cout << "Please enter the make: ";
    cin.get(),cin.getline(p[i].producer,20),cin.clear(),cin.sync();
    cout << "Please enter the year made: ";
    cin >> p[i].produceyear,cin.clear(),cin.sync();
   }

 cout << "Here is your collection: " << endl;
  for(i = 0;i < num; ++i)
   {
    cout << p[i].produceyear << " " <<  p[i].producer << endl;
   }
 delete []p;
 return 0;
}
