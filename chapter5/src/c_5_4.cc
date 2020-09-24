#include <iostream>
using namespace std;

int main() {
  int year;
  float Daphne = 100, Cleo = 100;
  for (year = 0; Cleo <= Daphne; ++year) {
    Daphne += 10;
    Cleo *= 1.05;
  }
  cout << "After " << year << " years"
       << ", the value of Cleo's invest can exceed Daphne's." << endl
       << "The value of Cleo's invest is: " << Cleo << endl
       << "The value of Daphne's invest is: " << Daphne << endl;
  return 0;
}
