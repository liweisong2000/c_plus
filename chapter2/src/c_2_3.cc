#include<iostream>
using namespace std;

int first();
int second();
int main()
{
  first();
  first();
  second();
  second();
  return 0;
}

int first()
{
  cout<<"Three blind mice"<<endl;
  return 0;
}

int second()
{
  cout<<"See how they run"<<endl;
  return 0;
}
