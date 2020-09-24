#include <iostream>
using namespace std;

int main() {
  float tvarps;
  float tax;
  const float sp1 = 10000, sp2 = 20000, sp3 = 35000;
  do {
    cout << "Please enter your tvarps:";
    (cin >> tvarps).get();
    if ((!cin) || (tvarps < 0))
      break;
    else if (tvarps <= 5000)
      tax = 0;
    else if (tvarps > 5000 && tvarps <= 15000)
      tax = sp1 * 0.1;
    else if (tvarps > 15000 && tvarps <= 35000)
      tax = sp1 * 0.1 + sp2 * 0.15;
    else
      tax = sp1 * 0.1 + sp2 * 0.15 + (tvarps - sp3) * 0.2;
    cout << "Your tax is: " << tax << endl;
  } while (1);
  return 0;
}
