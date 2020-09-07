#include <iostream>
#include <string>
using namespace std;

int main() {
  struct CandyBar {
    string brand;
    float weight;
    int calorie;
  };
  CandyBar snack = {"Mocha Munch", 2.3, 350};
  cout << "Here is the information of this candy: " << endl
       << "Brand: " << snack.brand << endl
       << "Weight: " << snack.weight << endl
       << "Calorie: " << snack.calorie << endl;
  return 0;
}
