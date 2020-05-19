#include<iostream>
using namespace std;

int main()
{
  double foot;
  double inch;
  double pound;
  double unit;
  double squareheight;
  double weight;
  const double changefoot = 12;
  const double changeinch = 0.0254;
  const double changekilo = 2.2;
  cout << "Please enter your height(___foot___inch):" << endl;
  cin >> foot;
  cout << "foot" << endl;
  cin >> inch;
  cout << "inch" << endl;
  cout << "Please enter your weight(pound):" << endl;
  cin >> pound;
  cout << "pound" << endl;
  unit = foot * changefoot + inch;
  squareheight = changeinch * changeinch * unit * unit;
  weight = pound / changekilo;
  cout << "Your BMI is:" << weight / squareheight << "kg/sq.m" << endl;
  return 0;
}
