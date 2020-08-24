#include "golf.h"
#include <iostream>
using namespace std;

int main() {
  golf ann;
  setgolf(ann, "Ann Birdfree", 24);
  showgolf(ann);

  int num = 2, i, hc;
  char choice;
  golf andy[num];
  for (i = 0; (i < num) && (setgolf(andy[num])); ++i) {
    cout << "Reset handicap('y' to yes,'n' to no):";
    (cin >> choice).get();
    if (choice == 'y') {
      cout << "Please enter the handicap: " << endl;
      (cin >> hc).get();
      handicap(andy[num], hc);
    }
    showgolf(andy[num]);
  }
  if (i == num)
    cout << "Full!" << endl;
  return 0;
}
