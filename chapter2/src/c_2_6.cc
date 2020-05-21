#include<iostream>
using namespace std;

double astronomical(double uns);
int main()
{
  double light;
  cout <<"Enter the number of light years:";
  cin>>light;
  double Ast=astronomical(light);
  cout <<light<<"light years="<<Ast<<"astronomical units"<<endl;
  return 0;
}

double astronomical(double uns)
{
  return 63246*uns;
}
