#include <cstring>
#include <iostream>
using namespace std;

struct CandyBar {
  string brand;
  double weight;
  int calorie;
};

void Input(CandyBar &Defu, const char *rand, double weight, int calorie) {
  Defu.brand = rand;
  Defu.weight = weight;
  Defu.calorie = calorie;
}

void Display(const CandyBar &Dis) {
  cout << "The brand is: " << Dis.brand << endl
       << "The weight is: " << Dis.weight << endl
       << "The calorie is: " << Dis.calorie << endl;
}

int main() {
  void Display(const CandyBar &Dis);
  void Input(CandyBar & Defu, const char *rand = "Millennium Munch",
             double weight = 2.85, int calorie = 350);
  CandyBar Defu;
  Input(Defu);
  Display(Defu);
  return 0;
}
