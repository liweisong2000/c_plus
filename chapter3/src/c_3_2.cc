#include<iostream>
using namespace std;

int main()
{
  double inch;
  double  foot;
  double pound;
  cout << "Please enter your height:" <<endl;
  cout << "inch ";
  cin >> inch;
  cout << "foot ";
  cin >> foot;
  cout << "Please enter your weight:" << endl;
  cout <<"pound " ;
  cin >> pound;
  const double height = 0.0254*0.0254*inch*inch;
  const double weight = pound/2.2;
  cout << "Your BMI is:" << weight/height << "kg/(m*m)" << endl;
  return 0;

  
}
