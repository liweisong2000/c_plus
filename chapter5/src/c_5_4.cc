#include<iostream>
using namespace std;

int main()
{
  float Dephone = 100;
  float Cleo = 100;
  int year;
  for (year = 0;Dephone >= Cleo; ++year)
  { 
    Dephone += 10;
    Cleo *= 1.05;
  }
  cout << "After " << year << " years";
  cout << ", the value of Cleo's invest can exceed Daphne's." << endl;
  cout << "The value of Cleo's invest is: " << Cleo << endl;
  cout << "The value of Dephone's invest is: " << Dephone << endl;
  return 0;
}
