#include<iostream>
using namespace std;

int main()
{
 int row;
 int i,j;
 const char* period = ".";
 const char* star = "*";
 cout << "Enter number of rows: ";
 cin >> row;

 for(i=1;i<=row;++i)
 {

  for(j=1;j<=(row-i);++j)
  {
   cout << period;
  }
  
  for(j=1;j<=i;++j)
  {
  cout << star;
  }
  
  cout << endl;
 
 }
 return 0;

}
