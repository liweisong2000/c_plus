#include<iostream>
void get_time(int i,int j);

int main()
{
  using namespace std;
  int hou;
  int min;
  cout<<"Enter the number of hours:";
  cin>>hou;
  cout<<"Enter the number of minutes:";
  cin>>min;
  get_time(hou,min);
  return 0;
}

void get_time(int i,int j)
{
  using namespace std;
  cout <<"Time:"<<i<<":"<<j<<endl;
}
