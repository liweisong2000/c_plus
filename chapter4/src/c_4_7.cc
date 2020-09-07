#include <iostream>
#include <string>
using namespace std;

int main() {
  void FloatInput(float &temp);
  struct data {
    string name;
    float diam;
    float weight;
  } pizza;
  while (1) {
    cout << "Please enter the company's name('q' to quit): " << endl;
    getline(cin, pizza.name);
    if (pizza.name == "q")
      break;

    cout << "Please enter the diam of pizza: " << endl;
    FloatInput(pizza.diam);

    cout << "Please enter the weight of pizza: " << endl;
    FloatInput(pizza.weight);

    cout << "The company is :" << pizza.name
         << ", diam of pizza is :" << pizza.diam
         << ",  weight of pizza is :" << pizza.weight << endl;
  }
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
