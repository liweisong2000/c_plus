#include<iostream>
using namespace std;

int main()
{
 long long world;
 long long US;
 cout << "Enter the world's population : ";
 cin >> world;
 cout << "Enter the population of the US : ";
 cin >> US;
 const double percent =(double)(US*100)/world;
 cout << "The population of the US is " << percent << "% of the world population" << endl;
 return 0;
}
