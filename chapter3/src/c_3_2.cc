#include<iostream>
using namespace std;

int main()
{
  double foot;
  double inch;
  double pound;
  cout << "Please enter your height(___foot___inch):" << endl;
  cin >> foot;
  cout << "foot" << endl;
  cin >> inch;
  cout << "inch" << endl;
  cout << "Please enter your weight(pound):" << endl;
  cin >> pound;
  cout << "pound" << endl;
  const double unit = foot*12+inch;
  const double height = 0.0254*0.0254*unit*unit;
  const double weight = pound/2.2;
  cout << "Your BMI is:" << weight/height << "kg/(m*m)" << endl;
  return 0;
}
