#include<iostream>
using namespace std ;

int main()
{
  double unite ;
  double pound ; 
  cout << "Please enter your height(foot.inch):" <<endl ;
  cin >> unite ;
  cout << "Please enter your weight(pound):"<<endl ;
  cin >> pound ;
  const double inch = unite * 12 ;
  const double height = 0.0254*0.0254*inch*inch ;
  const double weight = pound/2.2 ;
  cout << "Your BMI is:" << weight/height << "kg/(m*m)" << endl ;
  return 0 ;

  
}
