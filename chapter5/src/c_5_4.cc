#include<iostream>
using namespace std;

int main()
{
 float Dephone = 100;
 float Cleo = 100;
 int year = 1;

  for(;Dephone >= Cleo; ++year)
   { 
    Dephone += 10;
    Cleo += (Cleo * 0.05);
   }
  
 cout << "After ";
 cout << year - 1;
 cout << " years";
 cout << ", the value of Cleo's invest can exceed Daphne's ." << endl;
 cout << "The value of Cleo's invest is: " << Cleo << endl;
 cout << "The value of Dephone's invest is: " << Dephone << endl;
 return 0;
}
