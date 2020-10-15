#include <iostream>
#include <string>
using namespace std;

int main() {
  void FloatInput(float &temp);
  struct pizza {
    string name;
    float diam;
    float weight;
  };
  pizza *p = new pizza;

  while (1) {
    cout << "Please enter the diam of pizza('0' to quit): " << endl;
    FloatInput(p->diam);
    if (p->diam == 0)
      break;

    cout << "Please enter the company's name: " << endl;
    getline(cin, p->name);

    cout << "Please enter the weight of pizza: " << endl;
    FloatInput(p->weight);

    cout << "The company is: " << p->name << endl
         << "diam of pizza is: " << p->diam << endl
         << "weight of pizza is: " << p->weight << endl;
  }
  delete p;
  return 0;
}

void FloatInput(float &temp) {
  while (1) {
    (cin >> temp).get();
    if (cin)
      break;
    cout << "Wrong input!" << endl;
    cin.clear();
    cin.ignore(INT8_MAX, '\n');
  }
}
