#include<iostream>
using namespace std;
int calculate(int);
int main()
{
  int age;
  cout << "请输入您的年龄:";
  cin>>age;
  cout << "您的年龄:"<<age<< "总共有"<<calculate(age)<<"个月"<<endl;
}

int calculate(int age)
{
  return age*12;
}
