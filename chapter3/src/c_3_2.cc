#include<iostream>
using namespace std;
int main()
{
  double inch;
  double foot;
  double pound;
  cout << "Please enter your height:inch:";
  cin >> inch;
  cout << "foot:";
  cin >> foot;
  cout << "Please enter your weight:pound:"
  cin >> pound;
  const double heightm = 0.0254;
  const double weightkg = 1/2.2;
  cout << "Your BMI is:" << weightkg*/(height*height) <<endl;


  
}
