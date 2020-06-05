#include<iostream>
using namespace std;

int calculate(int age);
int main()
{
  int age;
  cout << "请输入您的年龄:";
  cin>>age;
  cout << "您的年龄:"<<age<< "总共有"<<calculate(age)<<"个月"<<endl;
  return 0;
}

int calculate(int age)
{
  return age*12;
}
