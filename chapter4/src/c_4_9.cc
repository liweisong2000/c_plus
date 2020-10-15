#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
  struct CandyBar {
    char brand[12];
    float weight;
    int calorie;
  };
  CandyBar *snack = new CandyBar[3];

  int i, j;
  for (i = 0; i < 3; ++i) {
    for (j = 0; j < 11; ++j)
      snack[i].brand[j] = j > 0 ? rand() % 26 + 'a' : rand() % 26 + 'A';
    snack[i].brand[5] = ' ';
    snack[i].brand[6] = rand() % 26 + 'A';
    snack[i].brand[11] = '\0';
    snack[i].weight = (rand() % 11 + 30) * 0.1;
    snack[i].calorie = rand() % 101 + 300;
  }

  cout << "Here is the information of this candy: " << endl;
  for (i = 0; i < 3; ++i)
    cout << "#" << i + 1 << endl
         << "Brand: " << snack[i].brand << endl
         << "Weight: " << snack[i].weight << endl
         << "Calorie: " << snack[i].calorie << endl;
  delete[] snack;
  return 0;
}
