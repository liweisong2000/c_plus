#include<iostream>
using namespace std;

int main()
{
  double foot;
  double inch;
  double pound;
  const int changefoot = 12;
  const float changeinch = 0.0254;
  const float changekilo = 2.2;
  cout << "Please enter your height(___foot___inch):" << endl;
  cin >> foot;
  cout << "foot" << endl;
  cin >> inch;
  cout << "inch" << endl;
  cout << "Please enter your weight(pound):" << endl;
  cin >> pound;
  cout << "pound" << endl;
  double unit = foot * changefoot + inch;
  double height = changeinch * changeinch * unit * unit;
  double weight = pound / changekilo;
  cout << "Your BMI is:" << weight/height << "kg/sq.m" << endl;
  return 0;
}
